//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#import <CoreMotion/CoreMotionExport.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSecureCoding.h>
#import <CoreMotion/CMLogItem.h>

typedef struct {
    double x;
    double y;
    double z;
} CMAcceleration;

COREMOTION_EXPORT_CLASS
@interface CMAccelerometerData : CMLogItem <NSCopying, NSObject, NSSecureCoding>
@property (readonly, nonatomic) CMAcceleration acceleration STUB_PROPERTY;
@end