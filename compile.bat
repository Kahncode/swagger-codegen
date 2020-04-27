pushd %~dp0%
mvn clean package -DskipTests
popd
