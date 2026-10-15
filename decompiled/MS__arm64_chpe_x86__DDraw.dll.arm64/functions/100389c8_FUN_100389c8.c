/*
 * FUN_100389c8 at 100389c8
 * undefined FUN_100389c8(void)
 * Address ranges: 100389c8-10038a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100389c8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [128];
  
  uVar4 = FUN_100039d0(param_1,*(int *)(param_1 + 0x11c),param_2);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x11c);
    puVar3 = (undefined8 *)FUN_100388c8(param_1,auStack_90,&DAT_100be2cc + iVar2 * 0x45);
    uVar7 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    iVar2 = iVar2 * 0xa4;
    *(undefined8 *)(&DAT_100bbc68 + iVar2) = puVar3[1];
    *(undefined8 *)(&DAT_100bbc60 + iVar2) = uVar7;
    *(undefined8 *)(&DAT_100bbc78 + iVar2) = uVar6;
    *(undefined8 *)(&DAT_100bbc70 + iVar2) = uVar5;
    uVar7 = puVar3[4];
    uVar6 = puVar3[7];
    uVar5 = puVar3[6];
    *(undefined8 *)(iVar2 + 0x100bbc88) = puVar3[5];
    *(undefined8 *)(&DAT_100bbc80 + iVar2) = uVar7;
    *(undefined8 *)(iVar2 + 0x100bbc98) = uVar6;
    *(undefined8 *)(&DAT_100bbc90 + iVar2) = uVar5;
    uVar7 = puVar3[8];
    uVar6 = puVar3[0xb];
    uVar5 = puVar3[10];
    *(undefined8 *)(&DAT_100bbca8 + iVar2) = puVar3[9];
    *(undefined8 *)(&DAT_100bbca0 + iVar2) = uVar7;
    *(undefined8 *)(&DAT_100bbcb8 + iVar2) = uVar6;
    *(undefined8 *)(&DAT_100bbcb0 + iVar2) = uVar5;
    uVar5 = puVar3[0xc];
    *(undefined8 *)(&DAT_100bbcc8 + iVar2) = puVar3[0xd];
    *(undefined8 *)(&DAT_100bbcc0 + iVar2) = uVar5;
    *(undefined8 *)(&DAT_100bbcd0 + iVar2) = puVar3[0xe];
    *(undefined4 *)(&DAT_100bbcd8 + iVar2) = *(undefined4 *)(puVar3 + 0xf);
  }
  return bVar1;
}

