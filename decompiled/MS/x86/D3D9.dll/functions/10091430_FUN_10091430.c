/*
 * FUN_10091430 at 10091430
 * bool __thiscall FUN_10091430(int param_1, int param_2, int param_3, undefined4 * param_4, byte param_5, byte param_6)
 * Address ranges: 10091430-100914bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10091430(int param_1,int param_2,int param_3,undefined4 *param_4,byte param_5,byte param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 *this;
  bool bVar3;
  
  this = FUN_1008fa89(-(uint)(*(int *)(param_1 + 0x14) != 0) & *(int *)(param_1 + 0x14) - 0x66b4U,
                      -(uint)(param_1 != 0) & param_1 + 0x78U,param_1,0,param_4,param_3,param_2,
                      *(undefined4 *)(param_1 + 0x5c),*(byte *)(param_1 + 0x6c),param_5,
                      *(int *)(param_1 + 0x58) == 0x14,*(undefined4 *)(param_1 + 0x40),
                      *(undefined4 *)(param_1 + 0x44),param_6);
  *(undefined4 **)(param_1 + 0x88 + (param_2 * 0x10 + param_3) * 4) = this;
  bVar3 = this == (undefined4 *)0x0;
  if (!bVar3) {
    cVar2 = FUN_100123f8(this,(int *)0x0);
    bVar3 = cVar2 == '\0';
    if (!bVar3) {
      LOCK();
      piVar1 = this + 0x1e;
      *piVar1 = *piVar1 + 1;
      bVar3 = *piVar1 == 0;
      UNLOCK();
    }
  }
  return bVar3;
}

