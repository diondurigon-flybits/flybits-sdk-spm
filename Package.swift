// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Flybits",
    products: [
        .library(name: "Concierge", targets: ["FlybitsCoreConcierge",
                                              "FlybitsSDK",
                                              "FlybitsPushSDK",
                                              "FlybitsKernelSDK",
                                              "FlybitsContextSDK",
                                              "FlybitsConcierge"]),
        .library(name: "Location", targets: ["FlybitsSDK",
                                             "FlybitsContextSDK",
                                             "FlybitsContextLocationPluginSDK"]),
        .library(name: "Core", targets: ["FlybitsSDK",
                                         "FlybitsPushSDK",
                                         "FlybitsKernelSDK",
                                         "FlybitsContextSDK"]),
    ],
    targets: [
        .binaryTarget(name: "FlybitsSDK", path: "Frameworks/FlybitsSDK.xcframework"),
        .binaryTarget(name: "FlybitsPushSDK", path: "Frameworks/FlybitsPushSDK.xcframework"),
        .binaryTarget(name: "FlybitsKernelSDK", path: "Frameworks/FlybitsKernelSDK.xcframework"),
        .binaryTarget(name: "FlybitsContextSDK", path: "Frameworks/FlybitsContextSDK.xcframework"),
        .binaryTarget(name: "FlybitsCoreConcierge", path: "Frameworks/FlybitsCoreConcierge.xcframework"),
        .binaryTarget(name: "FlybitsConcierge", path: "Frameworks/FlybitsConcierge.xcframework"),
        .binaryTarget(name: "FlybitsContextLocationPluginSDK", path: "Frameworks/FlybitsContextLocationPluginSDK.xcframework")
    ]
)
