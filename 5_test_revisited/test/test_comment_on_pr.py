import unittest
from unittest.mock import patch, MagicMock
from mock_response import MockResponse
from src.comment_on_pr import GraphQlGitHub


class MockArgs:
    """
    This class is used to mock passed arguments
    """

    def __init__(self, pr_number: int, comment: str, token: str):
        self.pr_number = pr_number
        self.comment = comment
        self.token = token


class TestCommentOnPR(unittest.TestCase):
    # GIVEN-WHEN-THEN
    @patch(
        "requests.post",
        MagicMock(
            side_effect=[
                MockResponse(200, "test/data/response_pr.json"),
                MockResponse(200, "test/data/response_mutation.json"),
            ]
        ),
    )
    def test_comment_to_pr(
        self,
    ):
        # Arrange
        pr_number = 1
        comment = "Hello World"
        token = "any_token"
        # Act
        var = GraphQlGitHub.github_comment_posted_pr(MockArgs(pr_number, comment, token))
        # Assert
        self.assertEqual(var, MockResponse(200, "test/data/response_mutation.json").json())
