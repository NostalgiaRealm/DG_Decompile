/*
 * FUN_1800292e8 at 1800292e8
 * undefined __cdecl FUN_1800292e8(longlong param_1)
 * Address ranges: 1800292e8-180029513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800292e8(longlong param_1)

{
  ulonglong *puVar1;
  SIZE_T SVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  PVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  DWORD aDStack_a0 [2];
  longlong local_98;
  longlong local_90;
  _MEMORY_BASIC_INFORMATION local_88;
  
  local_90 = 0;
  local_98 = param_1;
  do {
    lVar10 = local_98 + local_90 * 0x170;
    if (((*(char *)(lVar10 + 0x1e1) != '\0') && (*(longlong *)(lVar10 + 0x1a8) != 0)) &&
       ((*(byte *)(lVar10 + 0x1e2) & 1) != 0)) {
      puVar1 = (ulonglong *)(lVar10 + 0x1e8);
      local_88.BaseAddress = (PVOID)0x0;
      uVar7 = *puVar1;
      uVar9 = 0;
      uVar5 = uVar7;
      do {
        uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar3 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        if ((1 - (uVar3 >> 6) & 0xff) != 0) {
          uVar8 = -1L << ((ulonglong)(uVar3 + 1) & 0x3f);
          iVar11 = uVar9 + uVar3;
          uVar5 = ~uVar5 & uVar8;
          uVar7 = uVar7 & uVar8;
          pvVar6 = (PVOID)0x0;
          if (iVar11 != -1) goto LAB_1800293c0;
          break;
        }
        uVar9 = uVar9 + 0x40;
        if (uVar9 == 0x100) break;
        uVar7 = puVar1[uVar9 >> 6];
        uVar5 = 0;
        if (0x100 - uVar9 < 0x40) {
          uVar5 = 0xffffffffffffffff;
        }
        uVar5 = uVar7 | uVar5;
      } while (uVar9 < 0x100);
    }
LAB_1800294c8:
    local_90 = local_90 + 1;
    if (local_90 == 3) {
      return;
    }
  } while( true );
LAB_1800293c0:
  uVar8 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar3 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
  if ((1 - (uVar3 >> 6) & 0xff) == 0) {
    uVar9 = uVar9 + 0x40;
    if (uVar9 != 0x100) {
      uVar7 = puVar1[uVar9 >> 6];
      uVar5 = 0;
      if (0x100 - uVar9 < 0x40) {
        uVar5 = 0xffffffffffffffff;
      }
      uVar5 = ~(uVar7 | uVar5);
      if (uVar9 < 0x100) goto LAB_1800293c0;
    }
    iVar4 = -1;
  }
  else {
    uVar8 = -1L << ((ulonglong)(uVar3 + 1) & 0x3f);
    uVar5 = uVar5 & uVar8;
    uVar7 = uVar7 & uVar8;
    iVar4 = uVar3 + uVar9;
  }
  if (iVar4 == -1) {
    iVar4 = iVar11;
  }
  if ((pvVar6 == (PVOID)0x0) &&
     (SVar2 = VirtualQuery(*(LPCVOID *)(lVar10 + 0x1a8),&local_88,0x30), SVar2 == 0))
  goto LAB_1800294c8;
  VirtualProtect((LPVOID)(*(longlong *)(lVar10 + 0x1a8) + (ulonglong)(uint)(iVar11 << 0xf)),
                 ((ulonglong)(uint)(iVar4 - iVar11) & 0x1ffff) << 0xf,local_88.Protect | 0x100,
                 aDStack_a0);
  while( true ) {
    if (0xff < uVar9) goto LAB_1800294c8;
    uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar3 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    if ((1 - (uVar3 >> 6) & 0xff) != 0) break;
    uVar9 = uVar9 + 0x40;
    if (uVar9 == 0x100) goto LAB_1800294c8;
    uVar7 = puVar1[uVar9 >> 6];
    uVar5 = 0;
    if (0x100 - uVar9 < 0x40) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar5 = ~(uVar7 | uVar5);
  }
  uVar8 = -1L << ((ulonglong)(uVar3 + 1) & 0x3f);
  iVar11 = uVar9 + uVar3;
  uVar7 = uVar7 & uVar8;
  uVar5 = uVar5 & uVar8;
  pvVar6 = local_88.BaseAddress;
  if (iVar11 == -1) goto LAB_1800294c8;
  goto LAB_1800293c0;
}

