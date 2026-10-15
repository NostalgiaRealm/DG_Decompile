/*
 * FUN_100bb2c6 at 100bb2c6
 * int __stdcall FUN_100bb2c6(int param_1, byte * param_2, int * param_3)
 * Address ranges: 100bb2c6-100bb464
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bb2c6(int param_1,byte *param_2,int *param_3)

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
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d1530)[iVar3]) {
      iVar3 = 0;
      goto LAB_100bb2fe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_100bb377;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb2fe:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d1500)[iVar3]) {
      iVar3 = 0;
      goto LAB_100bb317;
    }
  }
  goto LAB_100bb377;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb317:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d1510)[iVar3]) {
      iVar3 = 0;
      goto LAB_100bb330;
    }
  }
  goto LAB_100bb377;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb330:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d14c0)[iVar3]) {
      iVar3 = 0;
      goto LAB_100bb349;
    }
  }
  goto LAB_100bb377;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb349:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d14d0)[iVar3]) {
      iVar3 = 0;
      goto LAB_100bb362;
    }
  }
  goto LAB_100bb377;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb3ac:
    iVar4 = param_1;
    if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100d14f0)[iVar3]) goto LAB_100bb3c7;
  }
  if (*puVar1 < 2) {
LAB_100bb3c7:
    iVar3 = 0;
    do {
      piVar5 = param_3;
      if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100d1430)[iVar3]) goto LAB_100bb3e4;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (*puVar1 < 3) {
LAB_100bb3e4:
      iVar3 = 0;
      do {
        if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100d1440)[iVar3]) goto LAB_100bb400;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      if (*puVar1 < 4) {
LAB_100bb400:
        iVar3 = 0;
        do {
          if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100d1490)[iVar3]) goto LAB_100bb41d;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        if (*puVar1 < 5) {
LAB_100bb41d:
          iVar3 = 0;
          do {
            if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100d14a0)[iVar3]) {
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
LAB_100bb43a:
  param_1 = 0;
  iVar3 = (**(code **)**(undefined4 **)(iVar4 + 0x638))
                    (*(undefined4 **)(iVar4 + 0x638),pbVar2,&param_1);
  if (-1 < iVar3) {
    *piVar5 = iVar4;
    return iVar3;
  }
  return iVar3;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100bb362:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100d1500)[iVar3]) {
      iVar3 = FUN_100cfea1(param_2,&DAT_100d14e0,0x10);
      puVar1 = (uint *)(iVar4 + 0x920);
      if ((iVar3 == 0) && (*puVar1 != 0)) goto LAB_100bb43a;
      iVar3 = 0;
      goto LAB_100bb3ac;
    }
  }
LAB_100bb377:
  *param_3 = param_1;
  FUN_100bb465(param_1);
  return 0;
}

