# init-cmake-project

Bash script that initialises an empty C project for building with CMake.

Based on the project structure described in [How to structure your project](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)

See [Sample result of script](sample/myproject) on how the structure looks like.

## Usage

` > init-cmake-project PROJECT_DIR PROJECT_NAME LIBRARY_NAME EXECUTABLE_NAME`

This will create a ready-to-build project inside `PROJECT_DIR`.

To build & unit test the project go inside the `build` directory and run `build_app.sh`

## Dependencies

Needs CMake installed to run.

Clones the [Unity Test API](https://github.com/ThrowTheSwitch/Unity) inside `PROJECT_DIR/extern` folder.

