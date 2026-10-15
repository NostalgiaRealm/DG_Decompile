/*
 * FUN_180034778 at 180034778
 * undefined8 __cdecl FUN_180034778(void)
 * Address ranges: 180034778-180034917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180034778(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong extraout_x15;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar3 = FUN_1800014c0();
  lVar10 = extraout_x15 * -0x10;
  puVar1 = (undefined8 *)(lVar3 + 0x3030);
  puVar6 = *(undefined8 **)(*(longlong *)(lVar3 + 0x3028) + 0x31c0);
  uVar8 = 0;
  *(undefined8 **)(&stack0xffffffffffffffa0 + lVar10) = (undefined8 *)(lVar3 + 0x30a8);
  plVar9 = (longlong *)*puVar6;
  *(undefined8 *)(lVar3 + 0x3038) = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar3 + 0x3048) = 0;
  *(undefined8 *)(lVar3 + 0x3040) = 0;
  *(undefined8 *)(lVar3 + 0x3058) = 0;
  *(undefined8 *)(lVar3 + 0x3050) = 0;
  *(undefined8 *)(lVar3 + 0x3068) = 0;
  *(undefined8 *)(lVar3 + 0x3060) = 0;
  *(undefined8 *)(lVar3 + 0x3078) = 0;
  *(undefined8 *)(lVar3 + 0x3070) = 0;
  *(undefined8 *)(lVar3 + 0x3088) = 0;
  *(undefined8 *)(lVar3 + 0x3080) = 0;
  *(undefined8 *)(lVar3 + 0x3098) = 0;
  *(undefined8 *)(lVar3 + 0x3090) = 0;
  *(undefined8 *)(lVar3 + 0x30a0) = 0;
  *(undefined8 *)(lVar3 + 0x30b0) = 0;
  *(undefined8 *)(lVar3 + 0x30a8) = 0;
  *(undefined8 *)(lVar3 + 0x30c0) = 0;
  *(undefined8 *)(lVar3 + 0x30b8) = 0;
  *(undefined8 *)(lVar3 + 0x30d0) = 0;
  *(undefined8 *)(lVar3 + 0x30c8) = 0;
  *(undefined8 *)(lVar3 + 0x30e0) = 0;
  *(undefined8 *)(lVar3 + 0x30d8) = 0;
  *(undefined8 *)(lVar3 + 0x30f0) = 0;
  *(undefined8 *)(lVar3 + 0x30e8) = 0;
  *(undefined8 *)(lVar3 + 0x3100) = 0;
  *(undefined8 *)(lVar3 + 0x30f8) = 0;
  *(undefined8 *)(lVar3 + 0x3110) = 0;
  *(undefined8 *)(lVar3 + 0x3108) = 0;
  *(undefined8 *)(lVar3 + 0x3118) = 0;
  while( true ) {
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar10) = 0x1000000040;
    uVar5 = 1;
    if (uVar8 - 2 < 3) {
      uVar5 = 2;
    }
    *(undefined4 *)(&stack0xffffffffffffffa8 + lVar10) = 0x1000;
    *(undefined4 *)(&stack0xffffffffffffffac + lVar10) = uVar5;
    uVar5 = 0;
    if (uVar8 - 2 < 3) {
      uVar5 = 0x10000;
    }
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar10) = 8;
    *(undefined4 *)(&stack0xffffffffffffffb4 + lVar10) = uVar5;
    FUN_180039698(&stack0xffffffffffffffe8 + lVar10,uVar8);
    lVar7 = *plVar9;
    lVar11 = lVar3 + (ulonglong)uVar8 * 8;
    *(undefined1 **)(&stack0xffffffffffffffc0 + lVar10) = &stack0xffffffffffffffe8 + lVar10;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar10) = 0;
    iVar2 = (**(code **)(lVar7 + 0x18))
                      (plVar9,&stack0xffffffffffffffa8 + lVar10,&stack0xffffffffffffffc0 + lVar10,
                       lVar11 + 0x3030);
    if (iVar2 < 0) break;
    lVar7 = *plVar9;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar10) = 0x100000000;
    uVar4 = puVar1[uVar8];
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar10) = 0x10000000000;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar10) = 0;
    iVar2 = (**(code **)(lVar7 + 0x38))
                      (plVar9,uVar4,&stack0xffffffffffffffd0 + lVar10,lVar11 + 0x30a8);
    if (iVar2 < 0) break;
    uVar8 = uVar8 + 1;
    if (0xe < uVar8) {
      return 1;
    }
  }
  lVar11 = *(longlong *)(&stack0xffffffffffffffa0 + lVar10);
  lVar10 = 0;
  do {
    plVar9 = *(longlong **)(lVar11 + lVar10 * 8);
    if (plVar9 != (longlong *)0x0) {
      FUN_180050888(*(longlong *)(*(longlong *)(lVar3 + 0x3028) + 0x31b0),
                    *(uint *)(*(longlong *)(lVar3 + 0x3028) + 0x31b8),plVar9);
      *(undefined8 *)(lVar11 + lVar10 * 8) = 0;
    }
    if ((longlong *)puVar1[lVar10] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[lVar10] + 0x10))();
      puVar1[lVar10] = 0;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0xf);
  return 0;
}

