import json


class MockResponse:
    """
    This class is used when tests make a request to github api
    """

    def __init__(self, status_code: int, path_to_json_file: str):
        self.status_code = status_code
        self.json_data = path_to_json_file
        with open(path_to_json_file, "r") as file:
            self.json_data = json.loads(file.read())

    def json(self):
        return self.json_data
