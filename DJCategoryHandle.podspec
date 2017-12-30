Pod::Spec.new do |s|
s.name         = "DJCategoryHandle"
s.version          = '0.0.1'
s.summary          = 'Jone hava this DJCategory.'
s.frameworks = 'UIKit','Foundation'
s.requires_arc = true
s.platform = :ios
s.ios.deployment_target = '8.0'
s.description  = "这是1111。"
s.homepage         = 'https://github.com/765235992/DJCategoryFramework'
s.license      = "MIT"
s.author           = { 'Jone' => '765235992@qq.com' }
s.source           = { :git => 'https://github.com/765235992/DJCategoryFramework.git', :tag => '0.0.1' }
s.source_files = 'DJCategoryFramework/Classes/**/*'
s.libraries = 'c++','z'
end
