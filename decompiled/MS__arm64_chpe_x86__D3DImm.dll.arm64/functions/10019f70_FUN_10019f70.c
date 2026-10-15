/*
 * FUN_10019f70 at 10019f70
 * undefined FUN_10019f70(void)
 * Address ranges: 10019f70-1001a22b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10019f70(undefined4 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  
  iVar18 = FUN_10081cb0(0x2294);
  puVar17 = (undefined4 *)(iVar18 + 0x13U & 0xfffffff0);
  puVar17[-1] = iVar18;
  FUN_10031cb0(puVar17,param_1,0xb4);
  *puVar17 = &PTR_FUN_1009c60c;
  *(undefined8 *)(puVar17 + 0x754) = 0;
  puVar17[0x756] = param_2;
  *(undefined8 *)(puVar17 + 0x757) = 0;
  *(undefined8 *)(puVar17 + 0x759) = 0;
  *(undefined8 *)(puVar17 + 0x75b) = 0;
  *(undefined8 *)(puVar17 + 0x75d) = 0;
  *(undefined8 *)(puVar17 + 0x75f) = 0;
  *(undefined8 *)(puVar17 + 0x761) = 0;
  *(undefined8 *)(puVar17 + 0x763) = 0;
  iVar18 = FUN_10081da0(0xc00);
  if (iVar18 == 0) {
    iVar18 = 0;
  }
  else {
    puVar1 = (undefined8 *)(iVar18 + 8);
    puVar2 = (undefined8 *)(iVar18 + 0x20);
    puVar3 = (undefined8 *)(iVar18 + 0x38);
    puVar4 = (undefined8 *)(iVar18 + 0x50);
    puVar5 = (undefined8 *)(iVar18 + 0x68);
    puVar6 = (undefined8 *)(iVar18 + 0x80);
    puVar7 = (undefined8 *)(iVar18 + 0x98);
    puVar8 = (undefined8 *)(iVar18 + 0xb0);
    puVar9 = (undefined8 *)(iVar18 + 200);
    puVar10 = (undefined8 *)(iVar18 + 0xe0);
    puVar11 = (undefined8 *)(iVar18 + 0xf8);
    puVar12 = (undefined8 *)(iVar18 + 0x110);
    puVar13 = (undefined8 *)(iVar18 + 0x128);
    puVar14 = (undefined8 *)(iVar18 + 0x140);
    puVar15 = (undefined8 *)(iVar18 + 0x158);
    puVar16 = (undefined8 *)(iVar18 + 0x170);
    iVar19 = 0x80;
    do {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *puVar2 = 0;
      iVar19 = iVar19 + -0x10;
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar3 = 0;
      puVar1 = puVar1 + 0x30;
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar4 = 0;
      puVar2 = puVar2 + 0x30;
      *(undefined1 *)(puVar4 + 1) = 0;
      *puVar5 = 0;
      puVar3 = puVar3 + 0x30;
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar6 = 0;
      puVar4 = puVar4 + 0x30;
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar7 = 0;
      puVar5 = puVar5 + 0x30;
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar8 = 0;
      puVar6 = puVar6 + 0x30;
      *(undefined1 *)(puVar8 + 1) = 0;
      *puVar9 = 0;
      puVar7 = puVar7 + 0x30;
      *(undefined1 *)(puVar9 + 1) = 0;
      *puVar10 = 0;
      puVar8 = puVar8 + 0x30;
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar11 = 0;
      puVar9 = puVar9 + 0x30;
      *(undefined1 *)(puVar11 + 1) = 0;
      *puVar12 = 0;
      puVar10 = puVar10 + 0x30;
      *(undefined1 *)(puVar12 + 1) = 0;
      *puVar13 = 0;
      puVar11 = puVar11 + 0x30;
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar14 = 0;
      puVar12 = puVar12 + 0x30;
      *(undefined1 *)(puVar14 + 1) = 0;
      *puVar15 = 0;
      puVar13 = puVar13 + 0x30;
      *(undefined1 *)(puVar15 + 1) = 0;
      *puVar16 = 0;
      puVar14 = puVar14 + 0x30;
      *(undefined1 *)(puVar16 + 1) = 0;
      puVar15 = puVar15 + 0x30;
      puVar16 = puVar16 + 0x30;
    } while (iVar19 != 0);
  }
  puVar17[0x765] = iVar18;
  *(undefined8 *)(puVar17 + 0x766) = 0x80;
  *(undefined8 *)(puVar17 + 0x768) = 0xffffffff00000000;
  puVar17[0x76a] = param_2 + 4;
  puVar17[0x76b] = param_2 + 0x38;
  *(undefined8 *)(puVar17 + 0x76c) = 0;
  *(undefined1 *)(puVar17 + 0x76e) = 0;
  *(undefined8 *)(puVar17 + 0x76f) = 0;
  *(undefined8 *)(puVar17 + 0x771) = 0;
  *(undefined8 *)(puVar17 + 0x773) = 0xa00000000000;
  FUN_10081f10(puVar17 + 0x775,0,0x4a0);
  return puVar17;
}

