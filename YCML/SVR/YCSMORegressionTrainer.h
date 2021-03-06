//
//  YCSMORegressionTrainer.h
//  YCML
//
//  Created by Ioannis (Yannis) Chatzikonstantinou on 11/12/15.
//  Copyright (c) 2016 Ioannis (Yannis) Chatzikonstantinou. All rights reserved.
//
// This file is part of YCML.
//
// YCML is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// YCML is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with YCML.  If not, see <http://www.gnu.org/licenses/>.

#import "YCSupervisedTrainer.h"
@class YCSVR, YCSMOCache, Matrix;

@interface YCSMORegressionTrainer : YCSupervisedTrainer

- (double)outputForModel:(YCSVR *)model
                   input:(Matrix *)input
                 lambdas:(Matrix *)lambdas
            exampleIndex:(int)index
                    bias:(double)bias;

- (double)errorForModel:(YCSVR *)model
                  input:(Matrix *)input
                 output:(Matrix *)output
                lambdas:(Matrix *)lambdas
           exampleIndex:(int)index
                   bias:(double)bias;

- (BOOL)step:(YCSVR *)model
       input:(Matrix *)input
      output:(Matrix *)output
     lambdas:(Matrix *)lambdas
          i1:(int)iu
          i2:(int)iv
        bias:(double *)bias
     epsilon:(double)epsilon
           C:(double)C;

@property (readonly) YCSMOCache *cache;

@end
