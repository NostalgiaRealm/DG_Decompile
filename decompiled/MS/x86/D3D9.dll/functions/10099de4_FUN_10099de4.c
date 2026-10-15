/*
 * FUN_10099de4 at 10099de4
 * int __stdcall FUN_10099de4(int param_1, uint param_2, uint param_3, int param_4, undefined4 * param_5, undefined4 * param_6, int param_7)
 * Address ranges: 10099de4-10099f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10099de4(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
                undefined4 *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_c = 0;
  iVar2 = FUN_1000484e((void *)(param_1 + -0x66b4),param_2,param_3,param_4,(int)param_5,param_6,
                       &local_c);
  if (param_7 != 0) {
    iVar2 = -0x7789f794;
    goto LAB_10099f06;
  }
  if (iVar2 < 0) goto LAB_10099f06;
  puVar3 = FUN_1008f965(param_1 + -0x66b4,*(undefined4 *)(param_1 + -0x58c8),param_2,param_3,param_4
                        ,param_5);
  iVar2 = -0x7ff8fff2;
  if (puVar3 == (undefined4 *)0x0) goto LAB_10099f06;
  iVar2 = -0x7ff8fff2;
  uVar4 = FUN_10011877((int)puVar3);
  if ((char)uVar4 != '\0') {
    param_5 = puVar3;
    uVar4 = FUN_10003d8f((void *)(param_1 + -0x5878),&param_5);
    iVar2 = -0x7ff8fff2;
    if ((char)uVar4 != '\0') {
      iVar2 = FUN_1009c729((int)(puVar3 + 0x13),0x100d1360,param_6);
      if (-1 < iVar2) {
        iVar5 = *(int *)(param_1 + -0x58c4) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar5);
        *(uint *)(&DAT_100df4e0 + iVar5) = uVar1 - local_c;
        *(uint *)(&DAT_100df4e4 + iVar5) = *(int *)(&DAT_100df4e4 + iVar5) - (uint)(uVar1 < local_c)
        ;
        goto LAB_10099ee8;
      }
      FUN_10007105((void *)(param_1 + -0x66b4),(int)puVar3);
    }
    FUN_100118f6((int)puVar3);
  }
LAB_10099ee8:
  if (iVar2 < 0) {
    FUN_1009c6d0(puVar3);
    FUN_100cfd6c(puVar3);
  }
LAB_10099f06:
  FUN_10003e89(&local_5);
  return iVar2;
}

