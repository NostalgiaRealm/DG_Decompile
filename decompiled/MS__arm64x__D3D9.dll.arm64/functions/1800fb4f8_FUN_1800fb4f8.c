/*
 * FUN_1800fb4f8 at 1800fb4f8
 * undefined FUN_1800fb4f8(void)
 * Address ranges: 1800fb4f8-1800fba27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fb4f8(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  local_148 = 0x100000400;
  uStack_140 = 8;
  local_138 = 0x40000000040;
  local_158 = &DAT_180233160;
  uStack_150 = 0x40000000400;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                    (*(longlong **)(param_1 + 0x6b0),&local_148,&local_158,param_1 + 0x1f20);
  if (-1 < iVar1) {
    local_130 = 0x100000000;
    uStack_128 = 0x100000000;
    local_120 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                      (*(longlong **)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x1f20),&local_130,
                       param_1 + 0x1f28);
    if (-1 < iVar1) {
      local_118 = 84000;
      uStack_110 = 0x88;
      local_108 = 0x5400000040;
      local_100 = 0x20000;
      uStack_f8 = 0x88;
      local_f0 = 0x400000040;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                        (*(longlong **)(param_1 + 0x6b0),&local_118,0,param_1 + 0x1f30);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                          (*(longlong **)(param_1 + 0x6b0),&local_100,0,&local_1e0);
        if (-1 < iVar1) {
          local_188 = 0x100000000;
          uStack_180 = 0x3e800000000;
          local_178 = 0;
          local_170 = 0x100000000;
          uStack_168 = 0x800000000000;
          local_160 = 0;
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x40))
                            (*(longlong **)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x1f30),
                             &local_188,param_1 + 0x1f38);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x40))
                              (*(longlong **)(param_1 + 0x6b0),local_1e0,&local_170,&local_1d8);
            if (-1 < iVar1) {
              local_e8 = 84000;
              uStack_e0 = 8;
              local_d8 = 0x5400000040;
              local_d0 = 0x20000;
              uStack_c8 = 8;
              local_c0 = 0x400000040;
              iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                                (*(longlong **)(param_1 + 0x6b0),&local_e8,0,param_1 + 8000);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                                  (*(longlong **)(param_1 + 0x6b0),&local_d0,0,param_1 + 0x1f50);
                if (-1 < iVar1) {
                  local_b8 = 0x100000000;
                  uStack_b0 = 0x3e800000000;
                  local_a8 = 0;
                  local_a0 = 0x100000000;
                  uStack_98 = 0x800000000000;
                  local_90 = 0;
                  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                                    (*(longlong **)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 8000)
                                     ,&local_b8,param_1 + 0x1f48);
                  if (-1 < iVar1) {
                    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                                      (*(longlong **)(param_1 + 0x6b0),
                                       *(undefined8 *)(param_1 + 0x1f50),&local_a0,param_1 + 0x1f58)
                    ;
                    if (-1 < iVar1) {
                      local_190 = 0;
                      local_1b8 = 0xc8000000a0;
                      uStack_1b0 = 0x100000001;
                      local_1a8 = 0x10000001b;
                      uStack_1a0 = 0;
                      local_198 = 0x28;
                      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x28))
                                        (*(longlong **)(param_1 + 0x6b0),&local_1b8,0,
                                         param_1 + 0x1ef0);
                      if (-1 < iVar1) {
                        local_1b8 = 0x11c00000190;
                        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x28))
                                          (*(longlong **)(param_1 + 0x6b0),&local_1b8,0,
                                           param_1 + 0x1f08);
                        if (-1 < iVar1) {
                          local_78 = 0;
                          local_88 = 0x40000001e;
                          uStack_80 = 0xffffffff00000000;
                          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                                            (*(longlong **)(param_1 + 0x6b0),
                                             *(undefined8 *)(param_1 + 0x1ef0),&local_88,
                                             param_1 + 0x1f00);
                          if (-1 < iVar1) {
                            local_70 = 0x40000001c;
                            uStack_68 = 0xffffffff00000000;
                            local_60 = 0;
                            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x38))
                                              (*(longlong **)(param_1 + 0x6b0),
                                               *(undefined8 *)(param_1 + 0x1f08),&local_70,
                                               param_1 + 0x1f18);
                            if (-1 < iVar1) {
                              local_1d0 = 0x40000001c;
                              local_1c8 = 0;
                              local_1c4 = 0;
                              iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x48))
                                                (*(longlong **)(param_1 + 0x6b0),
                                                 *(undefined8 *)(param_1 + 0x1ef0),&local_1d0,
                                                 param_1 + 0x1ef8);
                              if (-1 < iVar1) {
                                iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x48))
                                                  (*(longlong **)(param_1 + 0x6b0),
                                                   *(undefined8 *)(param_1 + 0x1f08),&local_1d0,
                                                   param_1 + 0x1f10);
                                if (-1 < iVar1) {
                                  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x220))
                                            (*(longlong **)(param_1 + 0x6b8),0,1,&local_1d8,0);
                                  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x218))
                                            (*(longlong **)(param_1 + 0x6b8),1,1,param_1 + 0x1f28);
                                  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x228))
                                            (*(longlong **)(param_1 + 0x6b8),
                                             *(undefined8 *)(param_1 + 0xcf8),0,0);
                                  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x148))
                                            (*(longlong **)(param_1 + 0x6b8),0x80,0x100,1);
                                  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x178))
                                            (*(longlong **)(param_1 + 0x6b8),
                                             *(undefined8 *)(param_1 + 0x1f50),local_1e0);
                                  (**(code **)(*local_1d8 + 0x10))();
                                  (**(code **)(*local_1e0 + 0x10))();
                                  return 1;
                                }
                                (**(code **)(**(longlong **)(param_1 + 0x1ef8) + 0x10))();
                                *(undefined8 *)(param_1 + 0x1ef8) = 0;
                              }
                              (**(code **)(**(longlong **)(param_1 + 0x1f18) + 0x10))();
                              *(undefined8 *)(param_1 + 0x1f18) = 0;
                            }
                            (**(code **)(**(longlong **)(param_1 + 0x1f00) + 0x10))();
                            *(undefined8 *)(param_1 + 0x1f00) = 0;
                          }
                          (**(code **)(**(longlong **)(param_1 + 0x1f08) + 0x10))();
                          *(undefined8 *)(param_1 + 0x1f08) = 0;
                        }
                        (**(code **)(**(longlong **)(param_1 + 0x1ef0) + 0x10))();
                        *(undefined8 *)(param_1 + 0x1ef0) = 0;
                      }
                      (**(code **)(**(longlong **)(param_1 + 0x1f58) + 0x10))();
                      *(undefined8 *)(param_1 + 0x1f58) = 0;
                    }
                    (**(code **)(**(longlong **)(param_1 + 0x1f48) + 0x10))();
                    *(undefined8 *)(param_1 + 0x1f48) = 0;
                  }
                  (**(code **)(**(longlong **)(param_1 + 0x1f50) + 0x10))();
                  *(undefined8 *)(param_1 + 0x1f50) = 0;
                }
                (**(code **)(**(longlong **)(param_1 + 8000) + 0x10))();
                *(undefined8 *)(param_1 + 8000) = 0;
              }
              (**(code **)(*local_1d8 + 0x10))();
            }
            (**(code **)(**(longlong **)(param_1 + 0x1f38) + 0x10))();
            *(undefined8 *)(param_1 + 0x1f38) = 0;
          }
          (**(code **)(*local_1e0 + 0x10))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x1f30) + 0x10))();
        *(undefined8 *)(param_1 + 0x1f30) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x1f28) + 0x10))();
      *(undefined8 *)(param_1 + 0x1f28) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1f20) + 0x10))();
    *(undefined8 *)(param_1 + 0x1f20) = 0;
  }
  return 0;
}

