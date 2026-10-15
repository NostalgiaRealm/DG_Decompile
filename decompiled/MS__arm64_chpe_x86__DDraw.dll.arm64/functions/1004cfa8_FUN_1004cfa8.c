/*
 * FUN_1004cfa8 at 1004cfa8
 * undefined FUN_1004cfa8(void)
 * Address ranges: 1004cfa8-1004d0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004cfa8(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int local_40 [8];
  
  iVar2 = *(int *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x50);
  local_60 = *(undefined8 *)(param_2 + 0x48);
  uStack_48 = *(undefined8 *)(param_2 + 0x60);
  uStack_50 = *(undefined8 *)(param_2 + 0x58);
  if ((param_3 & 1) == 0) {
    uVar1 = (uint)((ulonglong)local_60 >> 0x20) & 0x4400;
    iVar6 = (int)((ulonglong)uStack_58 >> 0x20);
    if (uVar1 == 0x4400) {
      if ((iVar6 != 0x18) || ((int)uStack_50 != 8)) goto LAB_1004d038;
      uVar4 = 0x20;
    }
    else {
      if ((uVar1 != 0x400) || (iVar6 != 0x20)) goto LAB_1004d038;
      uVar4 = 0x18;
      if ((int)((ulonglong)uStack_50 >> 0x20) == -1) {
        uVar4 = 0x20;
      }
    }
    uStack_58 = CONCAT44(uVar4,(undefined4)uStack_58);
  }
LAB_1004d038:
  pcVar5 = (&PTR_DAT_100bd660)[iVar2 * 0x6a];
  if (*pcVar5 != -1) {
    iVar6 = 0;
    do {
      FUN_10038b50(param_1,local_40,pcVar5[iVar6]);
      if ((local_40[0] != 0) && (uVar3 = FUN_1004cb90(&local_60,local_40,param_3), (uVar3 & 1) != 0)
         ) {
        return (ulonglong)(byte)(&PTR_DAT_100bd660)[iVar2 * 0x6a][iVar6];
      }
      pcVar5 = (&PTR_DAT_100bd660)[iVar2 * 0x6a];
      iVar6 = iVar6 + 1;
    } while (pcVar5[iVar6] != -1);
  }
  return 0xffffffff;
}

