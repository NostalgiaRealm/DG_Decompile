/*
 * FUN_1006fb20 at 1006fb20
 * undefined FUN_1006fb20(void)
 * Address ranges: 1006fb20-1006fbd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fb20(int *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && ((char)param_1[3] != '\0')) {
    piVar1 = param_1 + 1;
    iVar2 = param_2 * 4;
    if ((uint)param_1[2] < (uint)((*piVar1 - *param_1) + iVar2)) {
      FUN_1006f950(param_1,iVar2);
    }
    puVar3 = (undefined8 *)*piVar1;
    uVar4 = 0;
    if (param_2 >> 1 != 0) {
      do {
        uVar5 = *param_3;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + 1;
        *puVar3 = uVar5;
        puVar3 = puVar3 + 1;
      } while (uVar4 < param_2 >> 1);
    }
    if ((param_2 & 1) != 0) {
      *(undefined4 *)puVar3 = *(undefined4 *)param_3;
    }
    *piVar1 = iVar2 + *piVar1;
  }
  return;
}

