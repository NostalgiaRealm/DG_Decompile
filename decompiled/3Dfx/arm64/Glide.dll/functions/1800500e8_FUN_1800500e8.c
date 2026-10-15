/*
 * FUN_1800500e8 at 1800500e8
 * undefined __cdecl FUN_1800500e8(longlong param_1, longlong param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, longlong param_8, undefined4 param_9, longlong param_10, undefined4 param_11)
 * Address ranges: 1800500e8-1800502c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800500e8(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,longlong param_8,undefined4 param_9,
                  longlong param_10,undefined4 param_11)

{
  int iVar1;
  longlong lVar2;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if (*(longlong **)(param_2 + 0xdc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
    *(undefined8 *)(param_2 + 0xdc0) = 0;
  }
  if (*(longlong **)(param_2 + 0xdb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdb8) + 0x10))();
    *(undefined8 *)(param_2 + 0xdb8) = 0;
  }
  if (*(longlong **)(param_2 + 0xdd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdd0) + 0x10))();
    *(undefined8 *)(param_2 + 0xdd0) = 0;
  }
  if (*(longlong **)(param_2 + 0xdc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdc8) + 0x10))();
    *(undefined8 *)(param_2 + 0xdc8) = 0;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    local_70 = 0x100000001;
    uStack_68 = 0x10000001b;
    local_50 = 0;
    local_60 = 0x100000000;
    uStack_58 = 8;
    local_a8 = param_9;
    uStack_a4 = 0;
    lVar2 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
    local_b0 = param_8;
    local_78 = param_3;
    iStack_74 = param_4;
    iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x6b0) + 0x28))
                      (*(longlong **)(lVar2 + 0x6b0),&local_78,&local_b0,param_2 + 0xdb8);
    if (-1 < iVar1) {
      local_80 = 0;
      local_90 = 0x40000001c;
      uStack_88 = 0xffffffff00000000;
      iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x6b0) + 0x38))
                        (*(longlong **)(lVar2 + 0x6b0),*(undefined8 *)(param_2 + 0xdb8),&local_90,
                         param_2 + 0xdc0);
      if (-1 < iVar1) {
        *(undefined4 *)(param_2 + 0xc50) = param_7;
        *(undefined4 *)(param_2 + 0xc48) = param_5;
        *(undefined4 *)(param_2 + 0xc4c) = param_6;
        if (param_10 == 0) {
          return;
        }
        local_a0 = param_10;
        local_98 = param_11;
        uStack_94 = 0;
        iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x6b0) + 0x28))
                          (*(longlong **)(lVar2 + 0x6b0),&local_78,&local_a0,param_2 + 0xdc8);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x6b0) + 0x38))
                            (*(longlong **)(lVar2 + 0x6b0),*(undefined8 *)(param_2 + 0xdc8),
                             &local_90,param_2 + 0xdd0);
          if (-1 < iVar1) {
            return;
          }
          (**(code **)(**(longlong **)(param_2 + 0xdc8) + 0x10))();
          *(undefined8 *)(param_2 + 0xdc8) = 0;
        }
        (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
        *(undefined8 *)(param_2 + 0xdc0) = 0;
      }
      (**(code **)(**(longlong **)(param_2 + 0xdb8) + 0x10))();
      *(undefined8 *)(param_2 + 0xdb8) = 0;
    }
  }
  return;
}

