// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "WeProovPackage",
    products: [
        .library(
            name: "WeProovPackage",
            targets: ["WeProovSDK",
                      "FLAnimatedImage",
                      "MBProgressHUD",
                      "SnapKit",
                      "SwiftRichString",
                      "SwiftyDraw",
                      "Wprv"]),
    ],
    targets: [
        .binaryTarget(name: "WeProovSDK", path: "./Sources/WeProovSDK.xcframework"),
        .binaryTarget(name: "FLAnimatedImage", path: "./Sources/FLAnimatedImage.xcframework"),
        .binaryTarget(name: "MBProgressHUD", path: "./Sources/MBProgressHUD.xcframework"),
        .binaryTarget(name: "SnapKit", path: "./Sources/SnapKit.xcframework"),
        .binaryTarget(name: "SwiftRichString", path: "./Sources/SwiftRichString.xcframework"),
        .binaryTarget(name: "SwiftyDraw", path: "./Sources/SwiftyDraw.xcframework"),
        .binaryTarget(name: "Wprv", path: "./Sources/Wprv.xcframework"),

    ]
)
