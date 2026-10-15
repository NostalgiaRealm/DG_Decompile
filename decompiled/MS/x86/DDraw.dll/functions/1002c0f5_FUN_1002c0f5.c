/*
 * FUN_1002c0f5 at 1002c0f5
 * uint __thiscall FUN_1002c0f5(void * this, undefined4 param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 1002c0f5-1002c24c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002c0f5(void *this,undefined4 param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  BOOL BVar2;
  int iVar3;
  uint *puVar4;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_8;
  
  puVar5 = param_2;
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar6 = 0x80070057;
  if ((((param_3 != (undefined4 *)0x0) && (*param_3 = 0, param_2 != (uint *)0x0)) &&
      (uVar6 = 0x88760064, (*param_2 & 0x3800401) == 0)) &&
     (uVar6 = 0x887601c2, *(char *)((int)this + 8) == '\0')) {
    iVar7 = 0;
    local_10 = 0x887600ff;
    param_2 = (uint *)0x0;
    if (((*(int *)((int)this + 0x110) != 0) &&
        (iVar3 = FUN_10031a1a((uint *)(*(int *)((int)this + 0x110) + 0x1b8),puVar5),
        puVar5 = extraout_EDX, (char)iVar3 != '\0')) &&
       ((*(uint *)((int)this + 0x1bc) & 0xfe00) != 0x200)) {
      param_2 = *(uint **)((int)this + 0x110);
      iVar7 = 1;
    }
    local_8 = 0;
    puVar4 = param_2;
    do {
      if (puVar4 != (uint *)0x0) break;
      puVar1 = *(uint **)((int)this + local_8 * 4 + 0x120);
      if (((puVar1 != (uint *)0x0) &&
          (iVar3 = FUN_10031a1a(puVar1 + 0x6e,puVar5), puVar4 = param_2, puVar5 = extraout_EDX_00,
          (char)iVar3 != '\0')) && ((puVar1[0x6f] & 0xfe00) != 0x200)) {
        iVar7 = iVar7 + 1;
        puVar4 = puVar1;
        param_2 = puVar1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 5);
    puVar4 = *(uint **)((int)this + 0x118);
    uVar6 = 0x887600ff;
    if ((puVar4 == (uint *)0x0) || (iVar3 = FUN_10031a1a(puVar4 + 0x6e,puVar5), (char)iVar3 == '\0')
       ) {
      if (param_2 == (uint *)0x0) goto LAB_1002c239;
    }
    else {
      iVar7 = iVar7 + 1;
      param_2 = puVar4;
    }
    uVar6 = local_10;
    if (iVar7 == 1) {
      iVar7 = (**(code **)(*param_2 + 0x34))(param_1,param_3,0);
      uVar6 = -(uint)(iVar7 != 0) & 0x80004005;
    }
  }
LAB_1002c239:
  LeaveCriticalSection(DAT_1006c254);
  return uVar6;
}

