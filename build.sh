#!/bin/sh

DIST=dist/UserVoiceSDK-3.2.12

#Change this path to your project path
TERMIUS=~/Developer/termius/termius-ios/Libs/UserVoiceSDK-3.1.0

echo "==== Building for iOS devices ===="
echo ""
xcodebuild

echo "==== Building for iOS simulator ===="
echo ""
xcodebuild -sdk iphonesimulator

mkdir -p $DIST

echo "Creating fat binary"
lipo -create build/Release-iphoneos/libUserVoice.a build/Release-iphonesimulator/libUserVoice.a -output $DIST/libUserVoice.a

echo "Copying other files"
cp -R Include $DIST/UVHeaders
cp -R Resources $DIST/UVResources
cp README.md $DIST/README.md
cp CHANGELOG.md $DIST/CHANGELOG.md

echo "Done! UserVoice iOS SDK built: $DIST"

echo "Copying files to Termius"

cp $DIST/CHANGELOG.md $TERMIUS/CHANGELOG.md
cp $DIST/libUserVoice.a $TERMIUS/libUserVoice.a
cp $DIST/README.md $TERMIUS/README.md
cp -rf $DIST/UVHeaders $TERMIUS/
cp -rf $DIST/UVResources $TERMIUS/

echo "Done! Lib replaced in: $TERMIUS"

rm -rvf $DIST

echo "Done! Temp directory removed"

