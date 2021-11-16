// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "WeProovPackage",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "WeProovPackage",
            targets: ["WeProovSDK"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on. swift 5.3
        // .package(url: /* package url */, from: "1.0.0"),
        .package(url: "https://github.com/Flipboard/FLAnimatedImage.git", .branch("master")),/*.exact("1.0")),*/
        .package(url: "https://github.com/ProovGroup/JTMaterialSpinner.git", .branch("Swift_v5")),/*.exact("3.0")),*/
        .package(url: "https://github.com/jdg/MBProgressHUD.git", .branch("master")),/*.exact("1.2")),*/
        .package(url: "https://github.com/SnapKit/SnapKit.git", .branch("develop")),/*.exact("4.0")),*/
        .package(url: "https://github.com/malcommac/SwiftRichString.git", .branch("master")),/*.exact("")),*/
        .package(url: "https://github.com/devxoul/Then.git", .branch("master")),/*.exact("2.7.0")),*/
        .package(url: "https://github.com/Awalz/SwiftyDraw.git", .branch("master"))/*.exact("2.1.2"))*/
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
//        .target(name: "WeProovSDK", dependencies: [], path: "./Sources/WeProovSDK.xcframework", exclude: [], sources: nil, publicHeadersPath: nil),
        .binaryTarget(name: "WeProovSDK", path: "./Sources/WeProovSDK.xcframework"),

    ]
)
