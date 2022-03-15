// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "MASPreferences",
    defaultLocalization: "en",
    platforms: [
        .macOS(.v10_10),
    ],
    products: [
        .library(name: "MASPreferences",
                 targets: ["MASPreferences"])
    ],
    targets: [
        .target(
            name: "MASPreferences",
            path: "./Framework",
            exclude: [
                "Info.plist",
                "MASPreferences.modulemap",
            ],
            resources: [],
            publicHeadersPath: "./Headers"
        )
    ]
)
