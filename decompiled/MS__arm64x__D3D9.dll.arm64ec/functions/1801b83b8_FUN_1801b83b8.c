/*
 * FUN_1801b83b8 at 1801b83b8
 * undefined FUN_1801b83b8(void)
 * Address ranges: 1801b83b8-1801b858f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801b83b8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *extraout_x11;
  longlong extraout_x15;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar5 = FUN_180104f10();
  lVar2 = extraout_x15 * -0x10;
  FUN_180222c50(&stack0xffffffffffffffd0 + lVar2,0,0x1000);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar7 = 0;
  do {
    (*(code *)puVar3)();
    cVar4 = (*extraout_x11)(lVar5,uVar7,&stack0xffffffffffffffd0 + lVar2);
    if (cVar4 == '\0') {
      iVar8 = 0;
      goto LAB_1801b8448;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  iVar8 = 1;
LAB_1801b8448:
  uVar9 = 0;
  if (iVar8 != 0) {
    *(int *)(&stack0xffffffffffffffb0 + lVar2) = iVar8;
    iVar8 = 3;
    *(longlong *)(&stack0xffffffffffffffc0 + lVar2) = lVar5 + 0x58;
    *(longlong *)(&stack0xffffffffffffffc8 + lVar2) = lVar5 + 0x5b;
    uVar11 = 0;
    do {
      lVar10 = uVar11 * 8;
      cVar4 = (&DAT_1802483d4)[lVar10];
      lVar1 = uVar11 * 4;
      *(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar2) + lVar1) = cVar4;
      if (cVar4 == -1) {
        uVar6 = FUN_1801b80b8(lVar5,iVar8,(&DAT_1802483d0)[uVar11 * 2],0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        *(char *)(lVar5 + lVar1 + 0x58) = (char)iVar8;
        iVar8 = iVar8 + 1;
      }
      cVar4 = (&DAT_1802483d5)[lVar10];
      *(longlong *)(&stack0xffffffffffffffb8 + lVar2) = lVar5 + lVar1;
      *(char *)(lVar5 + lVar1 + 0x59) = cVar4;
      if (cVar4 == -1) {
        uVar6 = FUN_1801b80b8(lVar5,iVar8,(&DAT_1802483d0)[uVar11 * 2],8);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        *(char *)(*(longlong *)(&stack0xffffffffffffffb8 + lVar2) + 0x59) = (char)iVar8;
        iVar8 = iVar8 + 1;
      }
      cVar4 = (&DAT_1802483d6)[lVar10];
      *(char *)(*(longlong *)(&stack0xffffffffffffffb8 + lVar2) + 0x5a) = cVar4;
      if (cVar4 == -1) {
        uVar6 = FUN_1801b80b8(lVar5,iVar8,(&DAT_1802483d0)[uVar11 * 2],0x10);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        *(char *)(*(longlong *)(&stack0xffffffffffffffb8 + lVar2) + 0x5a) = (char)iVar8;
        iVar8 = iVar8 + 1;
      }
      cVar4 = (&DAT_1802483d7)[lVar10];
      lVar10 = *(longlong *)(&stack0xffffffffffffffc8 + lVar2);
      *(char *)(lVar10 + lVar1) = cVar4;
      if (cVar4 == -1) {
        uVar6 = FUN_1801b80b8(lVar5,iVar8,(&DAT_1802483d0)[uVar11 * 2],0x18);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        *(char *)(lVar10 + lVar1) = (char)iVar8;
        iVar8 = iVar8 + 1;
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < 0xe);
    uVar9 = *(undefined4 *)(&stack0xffffffffffffffb0 + lVar2);
  }
  return uVar9;
}

