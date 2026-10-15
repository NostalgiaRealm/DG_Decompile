/*
 * FUN_100337af at 100337af
 * undefined __fastcall FUN_100337af(int param_1)
 * Address ranges: 100337af-100338b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100337af(int param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  void *this;
  UINT UVar4;
  uint uVar5;
  uint local_804 [256];
  tagPALETTEENTRY local_404 [256];
  
  uVar5 = 0;
  this = *(void **)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x1cc) == 0) {
    if (this == (void *)0x0) {
      if ((*(int *)(iVar2 + 0x6c) != 0) || (*(int *)(iVar2 + 0x70) != 0)) goto LAB_100338ac;
      this = (void *)FUN_10024537(*(int *)(param_1 + 0xfc));
      bVar3 = 1;
    }
    else {
      bVar3 = (byte)(*(uint *)(iVar2 + 200) >> 2) & 1;
    }
    if (bVar3 != 0) {
      if (this == (void *)0x0) {
        FUN_10060d45((int *)local_404,0,0x400);
        UVar4 = GetSystemPaletteEntries((HDC)0x0,0,0x100,local_404);
        if (UVar4 == 0x100) {
          do {
            local_804[uVar5] =
                 ((local_404[uVar5].peRed | 0xffffff00) << 8 | (uint)local_404[uVar5].peGreen) << 8
                 | (uint)local_404[uVar5].peBlue;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0x100);
        }
        else {
          FUN_10060d45((int *)local_804,0,0x400);
        }
      }
      else {
        FUN_1002965b(this,local_804);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x50) + 0x40))(local_804);
    }
  }
LAB_100338ac:
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
  *puVar1 = *puVar1 & 0xfffffffb;
  return;
}

