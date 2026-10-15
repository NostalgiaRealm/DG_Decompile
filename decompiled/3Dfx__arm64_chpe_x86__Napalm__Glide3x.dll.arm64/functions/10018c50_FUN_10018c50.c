/*
 * FUN_10018c50 at 10018c50
 * undefined FUN_10018c50(void)
 * Address ranges: 10018c50-1001933b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018c50(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  FUN_1001e230(param_1,*param_2);
  FUN_1001e2b0(param_1,param_2[1]);
  FUN_10037900(param_1,*(undefined4 *)(param_2 + 0x85),*(undefined4 *)(param_2 + 0x89),
               *(undefined4 *)(param_2 + 0x8d),*(undefined4 *)(param_2 + 0x91),
               *(undefined4 *)(param_2 + 0x95),*(undefined4 *)(param_2 + 0x99),
               *(undefined4 *)(param_2 + 0x9d),*(undefined4 *)(param_2 + 0xa1));
  FUN_100379e0(param_1,*(undefined4 *)(param_2 + 0xad),*(undefined4 *)(param_2 + 0xb1),
               *(undefined4 *)(param_2 + 0xb5),*(undefined4 *)(param_2 + 0xb9),
               *(undefined4 *)(param_2 + 0xbd),*(undefined4 *)(param_2 + 0xc1),
               *(undefined4 *)(param_2 + 0xc5),*(undefined4 *)(param_2 + 0xc9));
  FUN_100376c0(param_1,param_2[2],param_2[3],param_2[6],param_2[4],param_2[5],param_2[7]);
  FUN_100198b0(param_1,param_2[0x43]);
  FUN_10019920(param_1,param_2[0x44]);
  FUN_100199b0(param_1,*(undefined4 *)(param_2 + 0x45));
  FUN_10019b40(param_1,*(undefined4 *)(param_2 + 0x25));
  FUN_10019aa0(param_1,*(undefined4 *)(param_2 + 0x39));
  FUN_10019a20(param_1,*(int *)(param_2 + 0x3d) == 1);
  FUN_10019d00(param_1,param_2[0x41]);
  FUN_10019d80(param_1,param_2[0x42]);
  FUN_10019e20(param_1,param_2 + 0x49);
  FUN_10019f80(param_1,*(undefined4 *)(param_2 + 0x72));
  FUN_1001a040(param_1,*(undefined2 *)(param_2 + 0x70));
  FUN_10010500(param_1,0);
  FUN_10019c90(param_1,*(int *)(param_2 + 0x5a) != 0,*(int *)(param_2 + 0x5e) != 0);
  FUN_100380c0(param_1,param_2[8],param_2[9],param_2[10],param_2[0xb]);
  FUN_10037d80(param_1,param_2[0xc]);
  FUN_10037e10(param_1,*(undefined4 *)(param_2 + 0xd),param_2[0x11],param_2[0x12]);
  FUN_10037ee0(param_1,param_2[0x13]);
  FUN_10037f60(param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x1c));
  FUN_10038070(param_1,param_2[0x20]);
  FUN_100378c0(param_1,*(undefined4 *)(param_2 + 0x21));
  FUN_1001ee50(param_1,*(undefined4 *)(param_2 + 0x62));
  FUN_1001f070(param_1,param_2[0x66]);
  FUN_1001efd0(param_1,param_2[0x67]);
  FUN_1001f280(param_1,*(int *)(param_2 + 0x68) != 0);
  FUN_1001e4b0(param_1,param_2[0x6d]);
  FUN_1001e510(param_1,*(undefined2 *)(param_2 + 0x6e));
  FUN_1001e570(param_1,param_2[0x6c]);
  FUN_10018b90(param_1,param_2[0x59]);
  piVar1 = (int *)(param_1 + 4);
  uVar3 = 0;
  if (*(int *)(*piVar1 + 0x33) != 0) {
    do {
      FUN_100373b0(param_1,uVar3,param_2[uVar3 + 0x76]);
      FUN_10036e80(param_1,uVar3,param_2[uVar3 * 0x9d + 0x10e],param_2[uVar3 * 0x9d + 0x10f]);
      FUN_10036fa0(param_1,uVar3,param_2[uVar3 * 0x9d + 0x110],param_2[uVar3 * 0x9d + 0x111]);
      FUN_10036f20(*(undefined4 *)(param_2 + uVar3 * 0x9d + 0x16b),param_1,uVar3);
      iVar2 = uVar3 + 2;
      FUN_10037ac0(param_1,uVar3,*(undefined4 *)(param_2 + iVar2 * 0x9d),
                   *(undefined4 *)(param_2 + 4 + iVar2 * 0x9d),
                   *(undefined4 *)(param_2 + 8 + iVar2 * 0x9d),
                   *(undefined4 *)(param_2 + 0xc + iVar2 * 0x9d),
                   *(undefined4 *)(param_2 + iVar2 * 0x9d + 0x10),
                   *(undefined4 *)((int)(param_2 + 0x14) + iVar2 * 0x9d),
                   *(undefined4 *)((int)(param_2 + 0x18) + iVar2 * 0x9d));
      FUN_10037bc0(param_1,uVar3,*(undefined4 *)(param_2 + uVar3 * 0x9d + 0x112),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x116),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x11a),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x11e),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x122),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x126),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x12a));
      FUN_10037510(param_1,uVar3,param_2[uVar3 * 0x9d + 0x166],
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x167));
      FUN_10037450(*(undefined4 *)(param_2 + uVar3 * 0x9d + 0x171),param_1,uVar3,
                   param_2[uVar3 * 0x9d + 0x16f],param_2[uVar3 * 0x9d + 0x170]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*piVar1 + 0x33));
  }
  FUN_10010910(param_1,*(undefined4 *)(param_2 + 0x79),*(undefined4 *)(param_2 + 0x7d));
  FUN_10010890(param_1,*(undefined4 *)(param_2 + 0x81));
  uVar3 = 0;
  if (*(int *)(*piVar1 + 0x33) != 0) {
    do {
      FUN_10010a80(param_1,uVar3,*(undefined4 *)(param_2 + uVar3 * 0x9d + 0x175),
                   *(undefined4 *)(param_2 + uVar3 * 0x9d + 0x179));
      FUN_100109f0(param_1,uVar3,*(undefined4 *)(param_2 + uVar3 * 0x9d + 0x17d));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(*piVar1 + 0x33));
  }
  return;
}

