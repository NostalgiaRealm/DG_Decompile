/*
 * FUN_180021d18 at 180021d18
 * uint __fastcall FUN_180021d18(longlong * param_1)
 * Address ranges: 180021d18-180021dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180021d18(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  LARGE_INTEGER local_res8 [4];
  
  (**(code **)(*param_1 + 0x2a0))();
  iVar5 = FUN_1800213f4(param_1[0x630]);
  QueryPerformanceCounter(local_res8);
  uVar1 = *(uint *)((longlong)param_1 + 0xac);
  lVar2 = *(longlong *)(param_1[0x630] + 0x20);
  uVar3 = *(ulonglong *)(param_1[0x630] + 0x18);
  cVar4 = (**(code **)(*param_1 + 0x2a8))(param_1);
  return (iVar5 << 0x12 | *(uint *)(param_1[0x630] + 0x128)) << 10 |
         -(uint)(((ulonglong)(uVar1 + 1) * ((local_res8[0].QuadPart - lVar2) % (longlong)uVar3)) /
                 uVar3 != (ulonglong)uVar1) & 0x40 | -(uint)(cVar4 != '\0') & 0x280 | 0xffff03f;
}

