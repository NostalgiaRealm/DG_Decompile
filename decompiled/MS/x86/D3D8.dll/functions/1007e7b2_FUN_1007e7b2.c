/*
 * FUN_1007e7b2 at 1007e7b2
 * int __stdcall FUN_1007e7b2(int param_1, uint param_2, uint param_3, uint param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 1007e7b2-1007e912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007e7b2(int param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5,
                undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_14;
  uint local_10;
  uint local_9;
  char local_5;
  
  FUN_10003838(&local_5,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_10 = 0;
  local_14 = 0;
  iVar2 = FUN_10004051((void *)(param_1 + -0x58e0),param_2,param_3,param_4,(int)param_5,param_6,
                       &local_10,&local_14);
  if (iVar2 < 0) goto LAB_1007e902;
  iVar2 = -0x7ff8fff2;
  if ((*(int *)(param_1 + -0x4ddc) == 3) ||
     (local_9 = local_9 & 0xffffff00, (*(byte *)(param_1 + -0x4dd4) & 0x20) != 0)) {
    local_9 = CONCAT31(local_9._1_3_,1);
  }
  uVar4 = *(undefined4 *)(param_1 + -0x4db8);
  this = (void *)FUN_100ad475(0x78);
  if (this == (void *)0x0) goto LAB_1007e902;
  puVar3 = FUN_10081b17(this,param_1 + -0x58e0,uVar4,param_2,param_3,param_4,local_10,param_5,
                        (char)local_9);
  if (puVar3 == (undefined4 *)0x0) goto LAB_1007e902;
  uVar4 = FUN_10010ba7((int)puVar3);
  if ((char)uVar4 != '\0') {
    param_5 = puVar3;
    uVar4 = FUN_10003787((void *)(param_1 + -0x4d74),&param_5);
    if ((char)uVar4 != '\0') {
      iVar2 = FUN_10081c1d((int)(puVar3 + 0x1a),0x100af370,param_6);
      if (-1 < iVar2) {
        iVar5 = *(int *)(param_1 + -0x4db4) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar5);
        *(uint *)(&DAT_100ba918 + iVar5) = uVar1 - local_14;
        *(uint *)(&DAT_100ba91c + iVar5) =
             *(int *)(&DAT_100ba91c + iVar5) - (uint)(uVar1 < local_14);
        goto LAB_1007e8eb;
      }
      FUN_10006765((void *)(param_1 + -0x58e0),(int)puVar3);
    }
    FUN_10010c10((int)puVar3);
  }
LAB_1007e8eb:
  if (iVar2 < 0) {
    FUN_10081bbf(puVar3);
    FUN_100ad48c(puVar3);
  }
LAB_1007e902:
  FUN_10003881(&local_5);
  return iVar2;
}

