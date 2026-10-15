/*
 * FUN_1004cdf8 at 1004cdf8
 * undefined FUN_1004cdf8(void)
 * Address ranges: 1004cdf8-1004ceeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004cdf8(int param_1,uint param_2,int param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_30 [32];
  
  uVar4 = 0xffffffff;
  iVar3 = 0;
  pcVar1 = (&PTR_DAT_100bd65c)[*(int *)(param_1 + 0x40) * 0x6a];
  if (*pcVar1 != -1) {
    do {
      uVar5 = 0;
      do {
        if (((&DAT_100b3e00)[uVar5] == (uint)(byte)pcVar1[iVar3]) &&
           ((param_2 == 0 || (param_2 == (byte)(&DAT_100b3df0)[uVar5])))) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 6);
      iVar3 = iVar3 + 1;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
    } while (pcVar1[iVar3] != -1);
    if (uVar4 < 6) {
      puVar2 = (undefined8 *)FUN_10038b50(param_1,auStack_30,(&DAT_100b3e00)[uVar4]);
      uVar8 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      *(undefined8 *)(param_3 + 0x50) = puVar2[1];
      *(undefined8 *)(param_3 + 0x48) = uVar8;
      *(undefined8 *)(param_3 + 0x60) = uVar7;
      *(undefined8 *)(param_3 + 0x58) = uVar6;
      if (*(int *)(param_3 + 0x48) != 0) {
        return (&DAT_100b3e00)[uVar4];
      }
    }
  }
  return 0xffffffff;
}

