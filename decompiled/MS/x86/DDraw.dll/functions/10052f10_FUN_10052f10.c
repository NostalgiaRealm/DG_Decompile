/*
 * FUN_10052f10 at 10052f10
 * int __stdcall FUN_10052f10(int param_1, byte * param_2, int * param_3)
 * Address ranges: 10052f10-100530ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10052f10(int param_1,byte *param_2,int *param_3)

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
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062560)[iVar3]) {
      iVar3 = 0;
      goto LAB_10052f48;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_10052fc1;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052f48:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062530)[iVar3]) {
      iVar3 = 0;
      goto LAB_10052f61;
    }
  }
  goto LAB_10052fc1;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052f61:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062540)[iVar3]) {
      iVar3 = 0;
      goto LAB_10052f7a;
    }
  }
  goto LAB_10052fc1;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052f7a:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_100624f0)[iVar3]) {
      iVar3 = 0;
      goto LAB_10052f93;
    }
  }
  goto LAB_10052fc1;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052f93:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062500)[iVar3]) {
      iVar3 = 0;
      goto LAB_10052fac;
    }
  }
  goto LAB_10052fc1;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052ff6:
    iVar4 = param_1;
    if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_10062520)[iVar3]) goto LAB_10053011;
  }
  if (*puVar1 < 2) {
LAB_10053011:
    iVar3 = 0;
    do {
      piVar5 = param_3;
      if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_10062460)[iVar3]) goto LAB_1005302e;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (*puVar1 < 3) {
LAB_1005302e:
      iVar3 = 0;
      do {
        if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_10062470)[iVar3]) goto LAB_1005304a;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      if (*puVar1 < 4) {
LAB_1005304a:
        iVar3 = 0;
        do {
          if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100624c0)[iVar3]) goto LAB_10053067;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        if (*puVar1 < 5) {
LAB_10053067:
          iVar3 = 0;
          do {
            if (*(int *)(pbVar2 + iVar3 * 4) != (&DAT_100624d0)[iVar3]) {
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
LAB_10053084:
  param_1 = 0;
  iVar3 = (**(code **)**(undefined4 **)(iVar4 + 0x638))
                    (*(undefined4 **)(iVar4 + 0x638),pbVar2,&param_1);
  if (-1 < iVar3) {
    *piVar5 = iVar4;
    return iVar3;
  }
  return iVar3;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_10052fac:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_10062530)[iVar3]) {
      iVar3 = FUN_10060d16(param_2,&DAT_10062510,0x10);
      puVar1 = (uint *)(iVar4 + 0x920);
      if ((iVar3 == 0) && (*puVar1 != 0)) goto LAB_10053084;
      iVar3 = 0;
      goto LAB_10052ff6;
    }
  }
LAB_10052fc1:
  *param_3 = param_1;
  FUN_100530af(param_1);
  return 0;
}

