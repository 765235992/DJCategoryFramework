Pod::Spec.new do |s|
s.name         = "DJCategoryHandle"
s.version          = '1.0.0'
s.summary          = 'Jone hava this DJCategoryHandle.'
s.frameworks = 'UIKit','Foundation'
s.requires_arc = true
s.platform = :ios
s.ios.deployment_target = '8.0'
s.description  = "这是1111。"
s.homepage         = 'https://github.com/765235992/DJCategoryFramework'
s.license      = "MIT"
s.author           = { 'Jone' => '765235992@qq.com' }
s.source           = { :git => 'https://github.com/765235992/DJCategoryFramework.git', :tag => '0.0.2' }
s.source_files  = "Classes", "Classes/**/*.{h,m}"
s.libraries = 'c++','z'
end
