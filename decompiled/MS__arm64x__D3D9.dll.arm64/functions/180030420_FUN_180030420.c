/*
 * FUN_180030420 at 180030420
 * undefined FUN_180030420(void)
 * Address ranges: 180030420-1800304a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180030420(longlong param_1,byte param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    iVar1 = (**(code **)(*plVar2 + 0x70))
                      (plVar2,*(undefined8 *)(param_1 + 0x20),0,param_2 ^ 1 | 4,
                       (param_3 & 0xff) << 0x14,local_20);
    if (iVar1 == -0x7789fde4) {
      uVar3 = 2;
    }
    else if (-1 < iVar1) {
      uVar3 = 0;
      *param_4 = local_20[0];
    }
  }
  return uVar3;
}

