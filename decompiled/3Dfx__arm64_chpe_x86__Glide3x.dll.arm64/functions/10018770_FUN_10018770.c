/*
 * FUN_10018770 at 10018770
 * undefined FUN_10018770(void)
 * Address ranges: 10018770-10018c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018770(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  FUN_1001dc10(param_1,*param_2);
  FUN_1001dc90(param_1,param_2[1]);
  FUN_10019500(param_1,param_2[0x66],param_2[0x67],param_2[0x68],param_2[0x69],
               *(undefined4 *)(param_2 + 0x6a),param_2[0x1ae]);
  FUN_100195e0(param_1,param_2[0x6e],param_2[0x6f],param_2[0x70],param_2[0x71],
               *(undefined4 *)(param_2 + 0x72));
  FUN_10018f90(param_1,param_2[2],param_2[3],param_2[4],param_2[5]);
  FUN_10019120(param_1,param_2[0x24]);
  FUN_10019190(param_1,param_2[0x25]);
  FUN_10019220(param_1,*(undefined4 *)(param_2 + 0x26));
  FUN_100193b0(param_1,*(undefined4 *)(param_2 + 6));
  FUN_10019310(param_1,*(undefined4 *)(param_2 + 0x1a));
  FUN_10019290(param_1,*(int *)(param_2 + 0x1e) == 1);
  FUN_10019810(param_1,param_2[0x22]);
  FUN_10019890(param_1,param_2[0x23]);
  FUN_10019930(param_1,param_2 + 0x2a);
  FUN_10019a90(param_1,*(undefined4 *)(param_2 + 0x53));
  FUN_10019b50(param_1,*(undefined2 *)(param_2 + 0x51));
  FUN_1000e660(param_1,0);
  FUN_100196d0(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_1001e830(param_1,*(undefined4 *)(param_2 + 0x43));
  FUN_1001e9b0(param_1,param_2[0x47]);
  FUN_1001e910(param_1,param_2[0x48]);
  FUN_1001eb00(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_1001de90(param_1,param_2[0x4e]);
  FUN_1001def0(param_1,*(undefined2 *)(param_2 + 0x4f));
  FUN_1001df50(param_1,param_2[0x4d]);
  FUN_100186b0(param_1,param_2[0x3a]);
  piVar1 = (int *)(param_1 + 4);
  uVar3 = 0;
  if (*(int *)(*piVar1 + 0x33) != 0) {
    do {
      FUN_100380b0(param_1,uVar3,param_2[uVar3 + 0x57]);
      iVar2 = uVar3 * 0x55;
      FUN_10037b80(param_1,uVar3,param_2[iVar2 + 0xaf],param_2[iVar2 + 0xb0]);
      FUN_10037ca0(param_1,uVar3,param_2[iVar2 + 0xb1],param_2[iVar2 + 0xb2]);
      FUN_10037c20(*(undefined4 *)(param_2 + iVar2 + 0xc4),param_1,uVar3);
      FUN_10038140(param_1,uVar3,param_2[iVar2 + 0xb3],param_2[iVar2 + 0xb4],param_2[iVar2 + 0xb5],
                   param_2[iVar2 + 0xb6],*(undefined4 *)(param_2 + iVar2 + 0xb7),
                   *(undefined4 *)(param_2 + iVar2 + 0xbb));
      FUN_10038370(param_1,uVar3,param_2[iVar2 + 0xbf],*(undefined4 *)(param_2 + iVar2 + 0xc0));
      FUN_100382b0(*(undefined4 *)(param_2 + iVar2 + 0xca),param_1,uVar3,param_2[iVar2 + 200],
                   param_2[iVar2 + 0xc9]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*piVar1 + 0x33));
  }
  FUN_1000ea70(param_1,*(undefined4 *)(param_2 + 0x5a),*(undefined4 *)(param_2 + 0x5e));
  FUN_1000e9f0(param_1,*(undefined4 *)(param_2 + 0x62));
  uVar3 = 0;
  if (*(int *)(*piVar1 + 0x33) != 0) {
    do {
      iVar2 = uVar3 * 0x55;
      FUN_1000ebe0(param_1,uVar3,*(undefined4 *)(param_2 + iVar2 + 0xce),
                   *(undefined4 *)(param_2 + iVar2 + 0xd2));
      FUN_1000eb50(param_1,uVar3,*(undefined4 *)(param_2 + iVar2 + 0xd6));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*piVar1 + 0x33));
  }
  return;
}

