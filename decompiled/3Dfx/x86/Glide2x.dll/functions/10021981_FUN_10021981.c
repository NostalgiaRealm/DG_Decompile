/*
 * FUN_10021981 at 10021981
 * undefined __fastcall FUN_10021981(int param_1)
 * Address ranges: 10021981-10021b0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10021981(int param_1)

{
  SIZE_T SVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  _MEMORY_BASIC_INFORMATION local_34;
  DWORD local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(byte *)(param_1 + 0x82) & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 0x84);
    uVar5 = 0;
    local_34.BaseAddress = (PVOID)0x0;
    uVar4 = uVar3;
    do {
      uVar4 = ~uVar4;
      local_10 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> local_10 & 1) == 0; local_10 = local_10 + 1) {
        }
      }
      local_8 = param_1;
      if (uVar3 != 0) {
        do {
          uVar2 = -1 << ((char)local_10 + 1U & 0x1f);
          local_10 = local_10 + uVar5;
          uVar4 = uVar4 & uVar2;
          uVar3 = uVar3 & uVar2;
          if (local_10 == -1) {
            return;
          }
          do {
            local_14 = uVar5;
            local_c = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> local_c & 1) == 0; local_c = local_c + 1) {
              }
            }
            if (uVar4 != 0) {
              uVar5 = -1 << ((char)local_c + 1U & 0x1f);
              uVar4 = uVar4 & uVar5;
              uVar3 = uVar3 & uVar5;
              local_c = local_c + local_14;
              uVar5 = local_14;
              if (local_c != -1) goto LAB_10021a3d;
              break;
            }
            uVar5 = local_14 + 0x20;
            uVar4 = 0;
            if (uVar5 == 0x100) break;
            uVar3 = *(uint *)(local_8 + 0x84 + (uVar5 >> 5) * 4);
            uVar4 = ~(-(uint)(0x100 - uVar5 < 0x20) | uVar3);
          } while (uVar5 < 0x100);
          local_c = local_10;
LAB_10021a3d:
          if ((local_34.BaseAddress == (PVOID)0x0) &&
             (SVar1 = VirtualQuery(*(LPCVOID *)(local_8 + 0x54),&local_34,0x1c), SVar1 == 0)) {
            return;
          }
          VirtualProtect((LPVOID)(local_10 * 0x8000 + *(int *)(local_8 + 0x54)),
                         (local_c - local_10) * 0x8000,local_34.Protect | 0x100,&local_18);
          while( true ) {
            if (0xff < uVar5) {
              return;
            }
            local_10 = 0;
            if (uVar3 != 0) {
              for (; (uVar3 >> local_10 & 1) == 0; local_10 = local_10 + 1) {
              }
            }
            if (uVar3 != 0) break;
            uVar5 = uVar5 + 0x20;
            if (uVar5 == 0x100) {
              return;
            }
            uVar3 = *(uint *)(local_8 + 0x84 + (uVar5 >> 5) * 4);
            uVar4 = ~(-(uint)(0x100 - uVar5 < 0x20) | uVar3);
          }
        } while( true );
      }
      uVar5 = uVar5 + 0x20;
      if (uVar5 == 0x100) {
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x84 + (uVar5 >> 5) * 4);
      uVar4 = -(uint)(0x100 - uVar5 < 0x20) | uVar3;
    } while (uVar5 < 0x100);
  }
  return;
}

