/*
 * FUN_18009e288 at 18009e288
 * undefined FUN_18009e288(void)
 * Address ranges: 18009e288-18009e373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009e288(undefined8 param_1,uint *param_2,undefined4 param_3,ulonglong param_4,
                  undefined4 param_5,undefined1 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar4 = param_4 & 0xffffffff;
  bVar1 = (*param_2 & 0x1000) == 0;
  uVar2 = 0x3c;
  if (bVar1) {
    uVar2 = 1;
  }
  uVar3 = 0x27;
  if (bVar1) {
    uVar3 = 0x20;
  }
  FUN_1800f5730(param_2 + 4,param_1,uVar3,param_4,0xf,uVar4,0xe4,param_3,0xe4,0);
  FUN_1800f5730(param_2 + 4,param_1,uVar2,uVar4,3,uVar4,0x54,uVar4,0xfe,0);
  FUN_1800f5730(param_2 + 4,param_1,uVar2,param_5,param_6,uVar4,0,uVar4,0x55,0);
  return;
}

