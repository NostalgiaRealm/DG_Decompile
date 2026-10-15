/*
 * FUN_100c2028 at 100c2028
 * char __thiscall FUN_100c2028(void * this, int param_1, uint param_2, uint param_3, uint param_4, int * param_5)
 * Address ranges: 100c2028-100c2119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_100c2028(void *this,int param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  cVar7 = '\x01';
  piVar8 = param_5;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (*(uint *)((int)this + 0x24) <
      (uint)(*(int *)(*(int *)((int)this + 0x18) * 0x20 + 0x10 + iVar3) + param_1)) {
    uVar4 = (*(int *)((int)this + 0x18) + 1U) % *(uint *)((int)this + 0x10);
    iVar9 = uVar4 * 0x20;
    piVar8 = *(int **)(iVar9 + 0x14 + iVar3);
    uVar10 = (**(code **)(*piVar8 + 0x20))(piVar8);
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar1 = *(uint *)(iVar9 + 0x1c + iVar3);
    if ((uVar1 < uVar5) || ((uVar1 <= uVar5 && (*(uint *)(iVar9 + 0x18 + iVar3) <= (uint)uVar10))))
    {
      *(uint *)((int)this + 0x18) = uVar4;
      *(undefined4 *)(iVar9 + 0x10 + *(int *)((int)this + 0xc)) = 0;
    }
    else {
      uVar2 = FUN_100c1ea4((int)this);
      cVar7 = (char)uVar2;
      if (cVar7 == '\0') {
        FUN_100a4e23(
                    "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                    );
        DebugBreak();
        return '\0';
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    }
  }
  puVar6 = (uint *)(*(int *)((int)this + 0x18) * 0x20 + *(int *)((int)this + 0xc));
  uVar4 = puVar6[4] * *(int *)((int)this + 0x28);
  uVar1 = *puVar6;
  param_5[1] = puVar6[1] + (uint)CARRY4(uVar4,*puVar6);
  *param_5 = uVar4 + uVar1;
  param_5[2] = puVar6[4] * *(int *)((int)this + 0x28) + puVar6[2];
  param_5[3] = puVar6[3];
  param_5[4] = *(int *)((int)this + 0x28);
  puVar6[4] = puVar6[4] + param_1;
  puVar6[5] = param_2;
  puVar6[6] = param_3;
  puVar6[7] = param_4;
  return cVar7;
}

