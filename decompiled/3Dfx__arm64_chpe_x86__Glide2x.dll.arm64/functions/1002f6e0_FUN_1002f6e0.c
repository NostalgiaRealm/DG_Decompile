/*
 * FUN_1002f6e0 at 1002f6e0
 * undefined FUN_1002f6e0(void)
 * Address ranges: 1002f6e0-1002faf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f6e0(int param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_1002c9d0(param_1,*param_2);
  FUN_10048a00(param_1,param_2[0x61],param_2[0x62],param_2[99],param_2[100],
               *(undefined4 *)(param_2 + 0x65),param_2[0x134]);
  FUN_10048ae0(param_1,param_2[0x69],param_2[0x6a],param_2[0x6b],param_2[0x6c],
               *(undefined4 *)(param_2 + 0x6d));
  FUN_10048490(param_1,param_2[2],param_2[3],param_2[4],param_2[5]);
  FUN_10048620(param_1,param_2[0x24]);
  FUN_10048690(param_1,param_2[0x25]);
  FUN_10048720(param_1,*(undefined4 *)(param_2 + 0x26));
  FUN_100488b0(param_1,*(undefined4 *)(param_2 + 6));
  FUN_10048810(param_1,*(undefined4 *)(param_2 + 0x1a));
  FUN_10048790(param_1,*(int *)(param_2 + 0x1e) == 1);
  FUN_10048d10(param_1,param_2[0x22]);
  FUN_10048d90(param_1,param_2[0x23]);
  FUN_10048e30(param_1,param_2 + 0x2a);
  FUN_10048f90(param_1,*(undefined4 *)(param_2 + 0x53));
  FUN_10049050(param_1,*(undefined2 *)(param_2 + 0x51));
  FUN_100287d0(param_1,0);
  FUN_10048bd0(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_1002d420(param_1,*(undefined4 *)(param_2 + 0x43));
  FUN_1002d5a0(param_1,param_2[0x47]);
  FUN_1002d500(param_1,param_2[0x48]);
  FUN_1002d6f0(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_1002ca50(param_1,param_2[0x4e]);
  FUN_1002cab0(param_1,*(undefined2 *)(param_2 + 0x4f));
  FUN_1002cb10(param_1,param_2[0x4d]);
  FUN_1002f660(param_1,param_2[0x3a]);
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x33) != 0) {
    do {
      FUN_10047d40(param_1,uVar2,param_2[uVar2 + 0x57]);
      iVar1 = uVar2 * 0x41;
      FUN_100478a0(param_1,uVar2,param_2[iVar1 + 0x71],param_2[iVar1 + 0x72]);
      FUN_100479c0(param_1,uVar2,param_2[iVar1 + 0x73],param_2[iVar1 + 0x74]);
      FUN_10047940(*(undefined4 *)(param_2 + iVar1 + 0x86),param_1,uVar2);
      FUN_10047dd0(param_1,uVar2,param_2[iVar1 + 0x75],param_2[iVar1 + 0x76],param_2[iVar1 + 0x77],
                   param_2[iVar1 + 0x78],*(undefined4 *)(param_2 + iVar1 + 0x79),
                   *(undefined4 *)(param_2 + iVar1 + 0x7d));
      FUN_10048010(param_1,uVar2,param_2[iVar1 + 0x81],*(undefined4 *)(param_2 + (uVar2 + 2) * 0x41)
                  );
      FUN_10047f50(*(undefined4 *)(param_2 + iVar1 + 0x8c),param_1,uVar2,param_2[iVar1 + 0x8a],
                   param_2[iVar1 + 0x8b]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(*(int *)(param_1 + 4) + 0x33));
  }
  uVar2 = 0;
  do {
    FUN_100480e0(param_1,uVar2,param_2[uVar2 + 0x5a]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

