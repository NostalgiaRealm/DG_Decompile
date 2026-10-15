/*
 * FUN_1800d1bf8 at 1800d1bf8
 * undefined FUN_1800d1bf8(void)
 * Address ranges: 1800d1bf8-1800d1cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800d1bf8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_6 == 1) {
    uVar4 = 1;
    uVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar1 = func_0x000180222cb8(uVar2,&DAT_18023a0b8);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = func_0x000180222cb8(uVar2,s_appdriven_18023a0d0);
      if (iVar1 == 0) {
        *param_5 = 0;
        return 1;
      }
      iVar1 = func_0x000180222cb8(uVar2,&DAT_18023a0c8);
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      else {
        iVar1 = func_0x000180222cb8(uVar2,&DAT_18023a0e0);
        if (iVar1 == 0) {
          uVar3 = 4;
        }
        else {
          iVar1 = func_0x000180222cb8(uVar2,&DAT_18023a0dc);
          if (iVar1 == 0) {
            uVar3 = 8;
          }
          else {
            iVar1 = func_0x000180222cb8(uVar2,&DAT_18023a0f0);
            if (iVar1 != 0) {
              return 0;
            }
            uVar3 = 0x10;
          }
        }
      }
    }
    *param_5 = uVar3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

