/*
 * FUN_1007e935 at 1007e935
 * int __stdcall FUN_1007e935(int param_1, uint param_2, uint param_3, int param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 1007e935-1007ea56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007e935(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
                undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_c;
  char local_5;
  
  FUN_10003838(&local_5,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_c = 0;
  iVar2 = FUN_1000412f((void *)(param_1 + -0x58e0),param_2,param_3,param_4,(int)param_5,param_6,
                       &local_c);
  if (iVar2 < 0) goto LAB_1007ea46;
  puVar3 = FUN_100795c8(param_1 + -0x58e0,*(undefined4 *)(param_1 + -0x4db8),param_2,param_3,param_4
                        ,param_5);
  iVar2 = -0x7ff8fff2;
  if (puVar3 == (undefined4 *)0x0) goto LAB_1007ea46;
  iVar2 = -0x7ff8fff2;
  uVar4 = FUN_1000db53((int)puVar3);
  if ((char)uVar4 != '\0') {
    param_5 = puVar3;
    uVar4 = FUN_10003787((void *)(param_1 + -0x4d68),&param_5);
    iVar2 = -0x7ff8fff2;
    if ((char)uVar4 != '\0') {
      iVar2 = FUN_10080e6a((int)(puVar3 + 0x13),0x100af380,param_6);
      if (-1 < iVar2) {
        iVar5 = *(int *)(param_1 + -0x4db4) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar5);
        *(uint *)(&DAT_100ba918 + iVar5) = uVar1 - local_c;
        *(uint *)(&DAT_100ba91c + iVar5) = *(int *)(&DAT_100ba91c + iVar5) - (uint)(uVar1 < local_c)
        ;
        goto LAB_1007ea2f;
      }
      FUN_100067fc((void *)(param_1 + -0x58e0),(int)puVar3);
    }
    FUN_1000dbd2((int)puVar3);
  }
LAB_1007ea2f:
  if (iVar2 < 0) {
    FUN_10080e0c(puVar3);
    FUN_100ad48c(puVar3);
  }
LAB_1007ea46:
  FUN_10003881(&local_5);
  return iVar2;
}

