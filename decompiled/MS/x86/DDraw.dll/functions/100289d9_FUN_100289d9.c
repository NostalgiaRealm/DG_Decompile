/*
 * FUN_100289d9 at 100289d9
 * undefined4 __thiscall FUN_100289d9(void * this, undefined4 param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 100289d9-10028b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100289d9(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  int *piVar6;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_64;
  undefined4 local_20;
  int *local_c;
  void *local_8;
  
  local_8 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  piVar1 = param_2;
  uVar5 = 0x80070057;
  if (((param_2 != (int *)0x0) && (param_3 != (undefined4 *)0x0)) &&
     (uVar5 = 0x88760082, (void *)param_2[0x3f] == this)) {
    piVar3 = (int *)(**(code **)(*param_2 + 0x38))();
    uVar5 = 0x88760247;
    local_c = piVar3;
    if ((((*(byte *)(piVar3 + 0x1a) & 8) == 0) || (piVar1[0x43] == 0)) &&
       (((piVar3[0x1a] & 0x2201U) == 0 && (uVar5 = 0x887601c2, (char)piVar1[2] == '\0')))) {
      FUN_10060d45(&local_88,0,0x7c);
      local_84 = piVar3[1] & 0x8080f;
      local_88 = 0x7c;
      uVar5 = 0x80004005;
      local_7c = piVar3[3];
      local_80 = piVar3[2];
      local_78 = piVar3[4];
      local_64 = piVar3[9];
      param_2 = (int *)0x0;
      local_20 = 0x40;
      iVar4 = FUN_1002799e(local_8,piVar1[0x40],piVar1[0x3e],param_1,&local_88,
                           (undefined4 *)piVar1[1],param_3,&param_2,extraout_ECX,0,(int *)0x0);
      if (-1 < iVar4) {
        piVar3 = local_c;
        piVar6 = param_2 + 0x54;
        for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
        param_2[0x55] = param_2[0x55] & 0xfffe1fff;
        param_2[0x59] = 0;
        uVar5 = 0;
        param_2[0x5a] = 0;
        param_2[0x65] = 0;
        param_2[100] = 0;
        param_2[0x73] = piVar1[0x73];
        param_2[0x74] = piVar1[0x74];
      }
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar5;
}

