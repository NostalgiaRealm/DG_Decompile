/*
 * _grTexSource@16 at 180003f78
 * undefined __cdecl _grTexSource@16(int param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 180003f78-1800040cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexSource_16(int param_1,uint param_2,uint param_3,int *param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  
                    /* 0x3f78  88  _grTexSource@16
                       0x3f78  188  grTexSource */
  lVar9 = FUN_180008ce0();
  if (*(char *)(lVar9 + 100) != '\0') {
    iVar4 = param_4[2];
    uVar6 = param_4[3];
    iVar5 = *param_4;
    iVar7 = param_4[1];
    FUN_1800643e0((uint *)(lVar9 + 0x60));
    bVar1 = param_1 < *(int *)(*(longlong *)(lVar9 + 0x30) + 0x833);
    if ((((bVar1 && iVar7 < 9) && iVar5 < 9) && uVar6 < 0xf ||
         ((bVar1 && iVar7 < 9) && iVar5 < 9) && uVar6 == 0xf) && (iVar4 + 3U < 7)) {
      uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x30) + 0x82f);
      uVar3 = param_2 & 0xfffffff8;
      if (uVar8 < (param_2 & 0xfffffff8)) {
        uVar3 = uVar8;
      }
      lVar2 = (longlong)param_1 * 0x55 + *(longlong *)(lVar9 + 0x18);
      if ((((*(byte *)(lVar2 + 0x1f2) != param_3) || (*(uint *)(lVar2 + 0x1d2) != uVar3)) ||
          (*(int *)(lVar2 + 0x1ea) != iVar4)) ||
         (((*(uint *)(lVar2 + 0x1ee) != uVar6 || (*(int *)(lVar2 + 0x1e6) != iVar7)) ||
          (bVar10 = 0, *(int *)(lVar2 + 0x1e2) != iVar5)))) {
        bVar10 = 1;
      }
      *(uint *)(lVar2 + 0x1d2) = uVar3;
      *(int *)(lVar2 + 0x1ea) = iVar4;
      *(uint *)(lVar2 + 0x1ee) = uVar6;
      *(int *)(lVar2 + 0x1e6) = iVar7;
      *(int *)(lVar2 + 0x1e2) = iVar5;
      *(char *)(lVar2 + 0x1f2) = (char)param_3;
      FUN_180008ae0(lVar9,param_1,bVar10);
    }
    FUN_1800643d0((uint *)(lVar9 + 0x60));
  }
  return;
}

