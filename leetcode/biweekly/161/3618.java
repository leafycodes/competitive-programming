class Solution {
    private boolean isPrime(int num) {
        if (num == 2) {
            return true;
        }

        if (num < 2 || num % 2 == 0) {
            return false;
        }

        for (int i = 3; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }

        return true;
    }

    public long splitArray(int[] nums) {
        long primeSum = 0;
        long compSum = 0;

        // add when composite, update sum to absolute difference if prime index
        for (int i = 0; i < nums.length; i++) {
            if (isPrime(i)) {
                primeSum += nums[i];
            } else {
                compSum += nums[i];
            }
        }

        return Math.abs(compSum - primeSum);
    }
}