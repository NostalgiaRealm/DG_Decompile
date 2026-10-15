/*
 * FUN_18002f1a0 at 18002f1a0
 * undefined8 __cdecl FUN_18002f1a0(uint * param_1, uint * param_2, byte param_3)
 * Address ranges: 18002f1a0-18002f74b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002f1a0(uint *param_1,uint *param_2,byte param_3)

{
  DWORD dwMaximumSizeLow;
  uint uVar1;
  SIZE_T dwNumberOfBytesToMap;
  int iVar2;
  HANDLE hFileMappingObject;
  LPVOID pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  *(byte *)(param_1 + 0x12) = param_3;
  *(bool *)((longlong)param_1 + 0x49) = param_2[3] < param_2[5];
  param_1[10] = *param_2;
  param_1[0xb] = param_2[1];
  param_1[0xc] = param_2[2];
  param_1[8] = param_2[3];
  uVar5 = param_2[4];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x11] = 0;
  param_1[9] = uVar5;
  uVar5 = 0x38;
  if (param_3 == 0) {
    uVar5 = 0x1c;
  }
  param_1[1] = uVar5;
  param_1[5] = param_2[6];
  param_1[2] = param_2[7];
  param_1[3] = param_2[8];
  param_1[4] = param_2[9];
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  FUN_18001d7d8((longlong)param_1);
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[0x1a] = uVar1;
  dwMaximumSizeLow = uVar5 * uVar1 * 4 + 0x8000;
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0x0,(LPSECURITY_ATTRIBUTES)0x0,4,0,dwMaximumSizeLow,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x14) = hFileMappingObject;
  dwNumberOfBytesToMap = (SIZE_T)dwMaximumSizeLow;
  pvVar3 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,dwNumberOfBytesToMap);
  *(LPVOID *)(param_1 + 0x18) = pvVar3;
  pvVar3 = MapViewOfFile(*(HANDLE *)(param_1 + 0x14),0xf001f,0,0,dwNumberOfBytesToMap);
  *(LPVOID *)(param_1 + 0x16) = pvVar3;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if ((param_1[2] == 9) ||
     (uVar4 = FUN_18002ede0((longlong)param_1,*param_2,param_2[1],param_2[2],
                            (undefined8 *)(param_1 + 0x34),(undefined8 *)(param_1 + 0x36),
                            (undefined8 *)(param_1 + 0x38),(undefined8 *)(param_1 + 0x3a),
                            (undefined8 *)(param_1 + 0x3c),param_1 + 0x3e), (uVar4 & 1) == 0))
  goto LAB_18002f4f8;
  local_b0 = param_2[3];
  uVar5 = param_2[4];
  local_88 = 0;
  uVar1 = param_2[5];
  local_98 = 0;
  uStack_90 = 0x28;
  local_a8 = 0x100000001;
  uStack_a0 = 0x100000035;
  uStack_ac = uVar5;
  iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x32),&local_b0,0,param_1 + 0x40);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x28))
                      ((longlong *)**(undefined8 **)(param_1 + 0x32),&local_b0,0,param_1 + 0x42);
    if (-1 < iVar2) {
      local_e0 = 0x400000039;
      local_d8 = 0;
      local_d4 = 0;
      iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x48))
                        ((longlong *)**(undefined8 **)(param_1 + 0x32),
                         *(undefined8 *)(param_1 + 0x40),&local_e0,param_1 + 0x44);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x48))
                          ((longlong *)**(undefined8 **)(param_1 + 0x32),
                           *(undefined8 *)(param_1 + 0x42),&local_e0,param_1 + 0x46);
        if (-1 < iVar2) {
          local_c8 = 0x400000039;
          uStack_c0 = 0xffffffff00000000;
          local_b8 = 0;
          iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 0x32),
                             *(undefined8 *)(param_1 + 0x40),&local_c8,param_1 + 0x48);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x38))
                              ((longlong *)**(undefined8 **)(param_1 + 0x32),
                               *(undefined8 *)(param_1 + 0x42),&local_c8,param_1 + 0x4a);
            if (-1 < iVar2) {
              local_78 = 0x100000001;
              uStack_70 = 0x100000039;
              local_58 = 0;
              local_68 = 0x300000000;
              uStack_60 = 0x3000000000000;
              local_80 = uVar1;
              uStack_7c = uVar5;
              iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x28))
                                ((longlong *)**(undefined8 **)(param_1 + 0x32),&local_80,0,
                                 param_1 + 0x5c);
              if (-1 < iVar2) {
                local_b0 = param_2[3];
                uVar5 = param_2[4];
                local_98 = 0;
                uStack_90 = 0x28;
                local_88 = 0;
                uVar1 = param_2[5];
                local_a8 = 0x100000001;
                uStack_a0 = 0x100000027;
                uStack_ac = uVar5;
                iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x28))
                                  ((longlong *)**(undefined8 **)(param_1 + 0x32),&local_b0,0,
                                   param_1 + 0x4c);
                if (-1 < iVar2) {
                  iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x28))
                                    ((longlong *)**(undefined8 **)(param_1 + 0x32),&local_b0,0,
                                     param_1 + 0x4e);
                  if (-1 < iVar2) {
                    local_e0 = 0x40000002a;
                    local_d8 = 0;
                    local_d4 = 0;
                    iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x48))
                                      ((longlong *)**(undefined8 **)(param_1 + 0x32),
                                       *(undefined8 *)(param_1 + 0x4c),&local_e0,param_1 + 0x50);
                    if (-1 < iVar2) {
                      iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x48))
                                        ((longlong *)**(undefined8 **)(param_1 + 0x32),
                                         *(undefined8 *)(param_1 + 0x4e),&local_e0,param_1 + 0x52);
                      if (-1 < iVar2) {
                        local_c8 = 0x40000002a;
                        uStack_c0 = 0xffffffff00000000;
                        local_b8 = 0;
                        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x38))
                                          ((longlong *)**(undefined8 **)(param_1 + 0x32),
                                           *(undefined8 *)(param_1 + 0x4c),&local_c8,param_1 + 0x54)
                        ;
                        if (-1 < iVar2) {
                          iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) + 0x38
                                              ))((longlong *)**(undefined8 **)(param_1 + 0x32),
                                                 *(undefined8 *)(param_1 + 0x4e),&local_c8,
                                                 param_1 + 0x56);
                          if (-1 < iVar2) {
                            local_78 = 0x100000001;
                            uStack_70 = 0x10000002a;
                            local_68 = 0x300000000;
                            uStack_60 = 0x3000000000000;
                            local_58 = 0;
                            local_80 = uVar1;
                            uStack_7c = uVar5;
                            iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x32) +
                                                0x28))((longlong *)**(undefined8 **)(param_1 + 0x32)
                                                       ,&local_80,0,param_1 + 0x5e);
                            if (-1 < iVar2) {
                              if (((param_3 & 1) == 0) ||
                                 (uVar4 = FUN_18002f0a0((longlong)param_1,*param_2,param_2[1],
                                                        param_2[2],(byte)param_2[10],
                                                        (undefined8 *)(param_1 + 0x58),
                                                        param_1 + 0x5a), (uVar4 & 1) != 0)) {
                                if (*(longlong *)(param_1 + 0x34) != 0) {
                                  *(ulonglong *)(param_1 + 0x34) =
                                       *(longlong *)(param_1 + 0x34) +
                                       (ulonglong)
                                       *(uint *)(*(longlong *)(param_1 + 0x30) +
                                                 (ulonglong)*param_1 * 0x28 + 0x30);
                                }
                                return 1;
                              }
                              FUN_18002ed48(param_1);
                              goto LAB_18002f6e4;
                            }
                            (**(code **)(**(longlong **)(param_1 + 0x56) + 0x10))();
                            param_1[0x56] = 0;
                            param_1[0x57] = 0;
                          }
                          (**(code **)(**(longlong **)(param_1 + 0x54) + 0x10))();
                          param_1[0x54] = 0;
                          param_1[0x55] = 0;
                        }
                        (**(code **)(**(longlong **)(param_1 + 0x52) + 0x10))();
                        param_1[0x56] = 0;
                        param_1[0x57] = 0;
                      }
                      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
                      param_1[0x50] = 0;
                      param_1[0x51] = 0;
                    }
                    (**(code **)(**(longlong **)(param_1 + 0x4e) + 0x10))();
                    param_1[0x4e] = 0;
                    param_1[0x4f] = 0;
                  }
                  (**(code **)(**(longlong **)(param_1 + 0x4c) + 0x10))();
                  param_1[0x4c] = 0;
                  param_1[0x4d] = 0;
                }
LAB_18002f6e4:
                FUN_18002ecb0(param_1);
                goto LAB_18002f4f0;
              }
              (**(code **)(**(longlong **)(param_1 + 0x4a) + 0x10))();
              param_1[0x4a] = 0;
              param_1[0x4b] = 0;
            }
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
            param_1[0x48] = 0;
            param_1[0x49] = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x46) + 0x10))();
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x44) + 0x10))();
        param_1[0x44] = 0;
        param_1[0x45] = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x42) + 0x10))();
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
LAB_18002f4f0:
  FUN_18002f008(param_1);
LAB_18002f4f8:
  FUN_18001d700((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
  return 0;
}

