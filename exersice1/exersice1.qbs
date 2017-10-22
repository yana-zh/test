import qbs

Project {
    minimumQbsVersion: "1.4.3"

    CppApplication {
        consoleApplication: true
        files: "main.cpp"
        cpp.cxxLanguageVersion: "c++11"

        Group {     // Properties for the produced executable
            fileTagsFilter: product.type
            qbs.install: true
        }
    }
}
