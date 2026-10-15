/*
 * FUN_1400035a8 at 1400035a8
 * undefined8 __cdecl FUN_1400035a8(longlong param_1, int param_2)
 * Address ranges: 1400035a8-140003843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400035a8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  
  if (param_2 == 0x406) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
    uVar1 = *puVar3 ^ 2;
  }
  else if (param_2 == 0x407) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
    uVar1 = *puVar3 ^ 4;
  }
  else {
    if (param_2 == 0x408) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 499) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 499) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 == 0x409) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 500) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 500) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 == 0x40a) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f5) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f5) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 == 0x40b) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f6) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f6) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 == 0x40c) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f8) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f8) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 == 0x40f) {
      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f7) =
           *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f7) ^ 1;
      goto switchD_140003628_default;
    }
    if (param_2 != 0x41a) {
      if (param_2 == 0x420) {
        *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f9) =
             *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1f9) ^ 1;
      }
      else if (param_2 == 0x421) {
        *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1fa) =
             *(byte *)(*(longlong *)(param_1 + 0x18) + 0x1fa) ^ 1;
      }
      else {
        switch(param_2) {
        case 0x422:
          lVar2 = 0;
          break;
        case 0x423:
          lVar2 = 1;
          break;
        case 0x424:
          lVar2 = 2;
          break;
        case 0x425:
          lVar2 = 3;
          break;
        case 0x426:
          lVar2 = 4;
          break;
        case 0x427:
          lVar2 = 5;
          break;
        case 0x428:
          lVar2 = 6;
          break;
        case 0x429:
          lVar2 = 7;
          break;
        case 0x42a:
          lVar2 = 8;
          break;
        case 0x42b:
          lVar2 = 9;
          break;
        case 0x42c:
          lVar2 = 10;
          break;
        case 0x42d:
          lVar2 = 0xb;
          break;
        case 0x42e:
          lVar2 = 0xc;
          break;
        case 0x42f:
          lVar2 = 0xd;
          break;
        case 0x430:
          lVar2 = 0xe;
          break;
        case 0x431:
          lVar2 = 0xf;
          break;
        case 0x432:
          lVar2 = 0x12;
          break;
        case 0x433:
          lVar2 = 0x13;
          break;
        case 0x434:
          lVar2 = 0x10;
          break;
        case 0x435:
          lVar2 = 0x11;
          break;
        case 0x436:
          lVar2 = 0x14;
          break;
        case 0x437:
          lVar2 = 0x15;
          break;
        case 0x438:
          lVar2 = 0x16;
          break;
        case 0x439:
          lVar2 = 0x17;
          break;
        case 0x43a:
          lVar2 = 0x18;
          break;
        case 0x43b:
          lVar2 = 0x19;
          break;
        case 0x43c:
          lVar2 = 0x1a;
          break;
        case 0x43d:
          lVar2 = 0x1b;
          break;
        case 0x43e:
          lVar2 = 0x1c;
          break;
        case 0x43f:
          lVar2 = 0x1d;
          break;
        case 0x440:
          lVar2 = 0x1e;
          break;
        case 0x441:
          lVar2 = 0x1f;
          break;
        default:
          goto switchD_140003628_default;
        }
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1ef);
        *puVar3 = *puVar3 ^ 1 << lVar2;
      }
      goto switchD_140003628_default;
    }
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
    uVar1 = *puVar3 ^ 1;
  }
  *puVar3 = uVar1;
switchD_140003628_default:
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return 1;
}

