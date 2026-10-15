/*
 * FUN_100c2913 at 100c2913
 * char __thiscall FUN_100c2913(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100c2913-100c29ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_100c2913(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  
  cVar7 = '\x01';
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  iVar1 = *(int *)((int)this + 8);
  if (*(uint *)((int)this + 0x1c) < *(int *)(*(int *)((int)this + 0x14) * 0x20 + 0xc + iVar1) + 1U)
  {
    uVar4 = (*(int *)((int)this + 0x14) + 1U) % *(uint *)((int)this + 0xc);
    iVar8 = uVar4 * 0x20;
    piVar2 = *(int **)(iVar8 + 0x10 + iVar1);
    uVar9 = (**(code **)(*piVar2 + 0x20))(piVar2);
    uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar3 = *(uint *)(iVar8 + 0x1c + iVar1);
    if ((uVar3 < uVar5) || ((uVar3 <= uVar5 && (*(uint *)(iVar8 + 0x18 + iVar1) <= (uint)uVar9)))) {
      *(uint *)((int)this + 0x14) = uVar4;
      *(undefined4 *)(iVar8 + 0xc + *(int *)((int)this + 8)) = 0;
    }
    else {
      uVar3 = FUN_100c26c9(this);
      cVar7 = (char)uVar3;
      if (cVar7 == '\0') {
        FUN_100a4e23(
                    "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                    );
        DebugBreak();
        return '\0';
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
  }
  puVar6 = (undefined4 *)(*(int *)((int)this + 0x14) * 0x20 + *(int *)((int)this + 8));
  *param_4 = *puVar6;
  param_4[1] = puVar6[1];
  param_4[2] = puVar6[3];
  param_4[3] = puVar6[2] + puVar6[3] * 8;
  puVar6[3] = puVar6[3] + 1;
  puVar6[4] = param_1;
  puVar6[6] = param_2;
  puVar6[7] = param_3;
  return cVar7;
}

