/*
 * FUN_1001f950 at 1001f950
 * undefined FUN_1001f950(void)
 * Address ranges: 1001f950-1001fa4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f950(int param_1,int param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int local_10 [2];
  int local_8;
  undefined3 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x1ec8);
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar6 = uVar4 + uVar5 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar6 * 0x18);
      uVar3 = uVar6;
      if (uVar8 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar8) break;
        uVar5 = uVar6 + 1;
        uVar6 = uVar5;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if (((uVar6 != uVar1) &&
        (plVar2 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar6 * 0x18),
        *plVar2 == (longlong)param_2)) && ((int)plVar2 + 0xc != 0)) {
      iVar7 = 0;
      if ((*(char *)((int)plVar2 + 0xd) == '\0') ||
         (iVar7 = 1, *(char *)((int)plVar2 + 0xe) == '\0')) {
        *(char *)((int)plVar2 + 0xc + iVar7 + 1) = param_3 + '\x01';
      }
      *(undefined1 *)((int)plVar2 + 0x12) = 1;
      return;
    }
  }
  local_8 = (uint)(byte)(param_3 + 1) << 8;
  local_4 = 0x10100;
  local_10[0] = param_2;
  FUN_100285e8(param_1 + 0x1ec0,local_10,&local_8);
  return;
}

