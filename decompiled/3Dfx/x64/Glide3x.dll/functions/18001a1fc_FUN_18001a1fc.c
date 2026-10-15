/*
 * FUN_18001a1fc at 18001a1fc
 * undefined __fastcall FUN_18001a1fc(longlong param_1)
 * Address ranges: 18001a1fc-18001a42b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a1fc(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  SIZE_T SVar6;
  int iVar7;
  int iVar8;
  DWORD local_res8 [8];
  ulonglong local_90 [2];
  uint local_80;
  _MEMORY_BASIC_INFORMATION local_78;
  
  if ((*(byte *)(param_1 + 0x9a) & 1) == 0) {
    return;
  }
  puVar1 = (ulonglong *)(param_1 + 0xa0);
  local_90[1] = *puVar1;
  local_78.BaseAddress = (PVOID)0x0;
  local_90[0] = ~local_90[1];
  local_80 = 0;
  while( true ) {
    lVar2 = 0;
    if (local_90[1] != 0) {
      for (; (local_90[1] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    if (local_90[1] != 0) break;
    local_80 = local_80 + 0x40;
    if (local_80 == 0x100) {
      return;
    }
    local_90[1] = puVar1[local_80 >> 6];
    local_90[0] = ~(local_90[1] | -(ulonglong)(0x100 - local_80 < 0x40));
    if (0xff < local_80) {
      return;
    }
  }
  lVar5 = 0;
  do {
    local_90[lVar5] = local_90[lVar5] & -1L << ((char)lVar2 + 1U & 0x3f);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 2);
  iVar8 = local_80 + (int)lVar2;
  while( true ) {
    if (iVar8 == -1) {
      return;
    }
    if (local_80 < 0x100) break;
LAB_18001a327:
    iVar4 = -1;
LAB_18001a329:
    uVar3 = local_80;
    iVar7 = iVar8;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    if ((local_78.BaseAddress == (PVOID)0x0) &&
       (SVar6 = VirtualQuery(*(LPCVOID *)(param_1 + 0x60),&local_78,0x30), SVar6 == 0)) {
      return;
    }
    VirtualProtect((LPVOID)((ulonglong)(uint)(iVar8 << 0xf) + *(longlong *)(param_1 + 0x60)),
                   (ulonglong)(uint)((iVar7 - iVar8) * 0x8000),local_78.Protect | 0x100,local_res8);
    while( true ) {
      if (0xff < uVar3) {
        return;
      }
      lVar2 = 0;
      if (local_90[1] != 0) {
        for (; (local_90[1] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
        }
      }
      if (local_90[1] != 0) break;
      local_80 = uVar3 + 0x40;
      if (local_80 == 0x100) {
        return;
      }
      local_90[1] = puVar1[local_80 >> 6];
      local_90[0] = ~(puVar1[local_80 >> 6] |
                     -(ulonglong)(0x100 - local_80 < 0x40) &
                     -1L << ((byte)(0x100 - local_80) & 0x3f));
      uVar3 = local_80;
    }
    lVar5 = 0;
    do {
      local_90[lVar5] = local_90[lVar5] & -1L << ((char)lVar2 + 1U & 0x3f);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    iVar8 = local_80 + (int)lVar2;
  }
LAB_18001a2e1:
  lVar2 = 0;
  if (local_90[0] != 0) {
    for (; (local_90[0] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  if (local_90[0] != 0) {
    lVar5 = 0;
    do {
      local_90[lVar5] = local_90[lVar5] & -1L << ((char)lVar2 + 1U & 0x3f);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    iVar4 = local_80 + (int)lVar2;
    goto LAB_18001a329;
  }
  local_80 = local_80 + 0x40;
  if (local_80 != 0x100) goto code_r0x00018001a2f6;
  goto LAB_18001a327;
code_r0x00018001a2f6:
  local_90[1] = puVar1[local_80 >> 6];
  local_90[0] = ~(puVar1[local_80 >> 6] |
                 -(ulonglong)(0x100 - local_80 < 0x40) & -1L << ((byte)(0x100 - local_80) & 0x3f));
  if (0xff < local_80) goto LAB_18001a327;
  goto LAB_18001a2e1;
}

