/*
 * FUN_10099c50 at 10099c50
 * int __stdcall FUN_10099c50(int param_1, uint param_2, uint param_3, uint param_4, undefined4 * param_5, undefined4 * param_6, int param_7)
 * Address ranges: 10099c50-10099dc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10099c50(int param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5,
                undefined4 *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_10;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_c = 0;
  local_10 = 0;
  iVar2 = FUN_10004768((void *)(param_1 + -0x66b4),param_2,param_3,param_4,(int)param_5,param_6,
                       &local_c,&local_10);
  if (param_7 != 0) {
    iVar2 = -0x7789f794;
    goto LAB_10099db1;
  }
  if (iVar2 < 0) goto LAB_10099db1;
  iVar2 = -0x7ff8fff2;
  if ((*(int *)(param_1 + -0x58ec) == 3) ||
     (param_7 = 0, (*(byte *)(param_1 + -0x58e4) & 0x20) != 0)) {
    param_7 = CONCAT31(param_7._1_3_,1);
  }
  uVar4 = *(undefined4 *)(param_1 + -0x58c8);
  this = (void *)FUN_100cfd55(0x78);
  if (this == (void *)0x0) goto LAB_10099db1;
  puVar3 = FUN_1009e1e0(this,param_1 + -0x66b4,uVar4,param_2,param_3,param_4,local_c,param_5,
                        (char)param_7);
  if (puVar3 == (undefined4 *)0x0) goto LAB_10099db1;
  uVar4 = FUN_10014ac1((int)puVar3);
  if ((char)uVar4 != '\0') {
    param_5 = puVar3;
    uVar4 = FUN_10003d8f((void *)(param_1 + -0x5884),&param_5);
    if ((char)uVar4 != '\0') {
      iVar2 = FUN_1009e2e1((int)(puVar3 + 0x1a),0x100d1350,param_6);
      if (-1 < iVar2) {
        iVar5 = *(int *)(param_1 + -0x58c4) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar5);
        *(uint *)(&DAT_100df4e0 + iVar5) = uVar1 - local_10;
        *(uint *)(&DAT_100df4e4 + iVar5) =
             *(int *)(&DAT_100df4e4 + iVar5) - (uint)(uVar1 < local_10);
        goto LAB_10099d93;
      }
      FUN_1000706e((void *)(param_1 + -0x66b4),(int)puVar3);
    }
    FUN_10014b2a((int)puVar3);
  }
LAB_10099d93:
  if (iVar2 < 0) {
    FUN_1009e288(puVar3);
    FUN_100cfd6c(puVar3);
  }
LAB_10099db1:
  FUN_10003e89(&local_5);
  return iVar2;
}

