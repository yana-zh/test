import qbs

CppApplication {
    type: "application" // To suppress bundle generation on Mac
    consoleApplication: true
    files: "main.cpp"
    cpp.cxxLanguageVersion : "c++11"
    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}

