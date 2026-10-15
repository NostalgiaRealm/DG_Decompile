/*
 * FUN_10027bd0 at 10027bd0
 * undefined FUN_10027bd0(void)
 * Address ranges: 10027bd0-10027d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027bd0(int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      *(undefined4 *)*piVar1 = *param_2;
      *(undefined4 *)(*piVar1 + 4) = param_2[1];
      *(undefined4 *)(*piVar1 + 8) = param_2[6];
      *(undefined4 *)(*piVar1 + 0xc) = param_2[8];
      *(undefined4 *)(*piVar1 + 0x10) = param_2[3];
      *(undefined4 *)(*piVar1 + 0x14) = param_2[4];
      *(undefined4 *)(*piVar1 + 0x18) = param_2[5];
      iVar4 = 2;
      *(undefined4 *)(*piVar1 + 0x1c) = param_2[7];
      *(uint *)(*piVar1 + 0x20) = (uint)param_4;
      iVar3 = 3;
      do {
        iVar4 = iVar4 + -1;
        puVar2 = (undefined8 *)(*piVar1 + iVar3 * 0xc);
        *puVar2 = *(undefined8 *)(param_2 + iVar3 * 3);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((int)(param_2 + iVar3 * 3) + 8);
        iVar3 = iVar3 + 1;
      } while (iVar4 != 0);
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 0xf;
      *piVar1 = *piVar1 + 0x3c;
    } while (uVar5 < param_3);
  }
  return;
}

