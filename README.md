# init-cmake-project

Bash script that initialises an empty C project for building with CMake.

Based on the project structure described in [How to structure your project](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)

## Usage

Make sure the script has executable permissions

` > chmod +x init-cmake-project`

Run with

` > init-cmake-project PROJECT_DIR PROJECT_NAME LIBRARY_NAME EXECUTABLE_NAME`

This will create a ready-to-build project under the `PROJECT_DIR` directory.
To build the project go inside the `build` directory and run `build.sh`

## Dependencies

Needs CMake installed to run.

