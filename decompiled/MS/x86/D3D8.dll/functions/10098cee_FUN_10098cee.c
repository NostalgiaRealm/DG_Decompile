/*
 * FUN_10098cee at 10098cee
 * int __stdcall FUN_10098cee(int param_1, byte * param_2, int * param_3)
 * Address ranges: 10098cee-10098e8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10098cee(int param_1,byte *param_2,int *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  pbVar2 = param_2;
  iVar4 = param_1;
  iVar3 = 0;
  *param_3 = 0;
  do {
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af4d0)[iVar3]) {
      iVar3 = 0;
      goto LAB_10098d26;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_10098d9f;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098d26:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af4a0)[iVar3]) {
      iVar3 = 0;
      goto LAB_10098d3f;
    }
  }
  goto LAB_10098d9f;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098d3f:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af4b0)[iVar3]) {
      iVar3 = 0;
      goto LAB_10098d58;
    }
  }
  goto LAB_10098d9f;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098d58:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af460)[iVar3]) {
      iVar3 = 0;
      goto LAB_10098d71;
    }
  }
  goto LAB_10098d9f;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098d71:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af470)[iVar3]) {
      iVar3 = 0;
      goto LAB_10098d8a;
    }
  }
  goto LAB_10098d9f;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098dd4:
    iVar4 = param_1;
    if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100af490)[iVar3]) goto LAB_10098def;
  }
  if (*puVar1 < 2) {
LAB_10098def:
    iVar3 = 0;
    do {
      piVar5 = param_3;
      if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100af3d0)[iVar3]) goto LAB_10098e0c;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (*puVar1 < 3) {
LAB_10098e0c:
      iVar3 = 0;
      do {
        if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100af3e0)[iVar3]) goto LAB_10098e28;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      if (*puVar1 < 4) {
LAB_10098e28:
        iVar3 = 0;
        do {
          if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100af430)[iVar3]) goto LAB_10098e45;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        if (*puVar1 < 5) {
LAB_10098e45:
          iVar3 = 0;
          do {
            if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100af440)[iVar3]) {
              return -0x7fffbffe;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 4);
          if (*puVar1 < 6) {
            return -0x7fffbffe;
          }
        }
      }
    }
  }
LAB_10098e62:
  param_1 = 0;
  iVar3 = (**(code **)**(undefined4 **)(iVar4 + 0x638))
                    (*(undefined4 **)(iVar4 + 0x638),pbVar2,&param_1);
  if (-1 < iVar3) {
    *piVar5 = iVar4;
    return iVar3;
  }
  return iVar3;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10098d8a:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100af4a0)[iVar3]) {
      iVar3 = FUN_100ada5f(param_2,&DAT_100af480,0x10);
      puVar1 = (uint *)(iVar4 + 0x920);
      if ((iVar3 == 0) && (*puVar1 != 0)) goto LAB_10098e62;
      iVar3 = 0;
      goto LAB_10098dd4;
    }
  }
LAB_10098d9f:
  *param_3 = param_1;
  FUN_10098e8d(param_1);
  return 0;
}

