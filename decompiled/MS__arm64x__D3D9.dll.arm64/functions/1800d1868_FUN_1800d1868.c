/*
 * FUN_1800d1868 at 1800d1868
 * undefined FUN_1800d1868(void)
 * Address ranges: 1800d1868-1800d194b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800d1868(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 *param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_40 [4];
  
  if (param_6 != 1) {
    return 0;
  }
  uVar4 = (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
  iVar3 = func_0x000180222cb8(uVar4,&DAT_18023a088);
  if (iVar3 == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = func_0x000180222cb8(uVar4,s_false_18023a09c);
    if (iVar3 == 0) {
      *param_5 = 0;
      return 1;
    }
    local_40[0] = 0;
    cVar2 = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,local_40);
    if (cVar2 == '\0') {
      return 0;
    }
    if (1 < local_40[0]) {
      return 0;
    }
    bVar1 = local_40[0] != 0;
  }
  *param_5 = bVar1;
  return 1;
}

